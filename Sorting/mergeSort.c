#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}

void Merge(int A[],int l,int mid,int h)
{
  int i=l,j=mid+1,k=l;
  int B[1000];

  while(i<=mid && j<=h)
  {
    if(A[i]<A[j])
       B[k++]=A[i++];
     else 
        B[k++]=A[j++];
  } 

  for(;i<=mid;i++)
     B[k++]=A[i];
  for(;j<=h;j++)
     B[k++]=A[j];
  for(i=l;i<=h;i++)
     A[i]=B[i]; 

}

void IMergeSort(int A[], int n)
{
   int p,l,h,mid,i;

   for(p=2;p<=n;p=p*2)
   {
        for(i=0;i+p-1<n;i=i+p)
        {
         l=i;
         h=i+p-1;
         mid=(l+h)/2;
         printf("l=%d,h=%d mid=%d \n",l,h,mid);
         printf("A[l]=%d, A[mid]=%d, A[h]=%d \n",A[l],A[mid],A[h]);
         Merge(A,l,mid,h);
        }
   }

    if(p/2<n)
      Merge(A,0,p/2-1,n);
}

void MergeSortR(int A[],int l,int h)
{
   int mid;

   if(l<h)
   {
     mid=(l+h)/2;
     MergeSortR(A,l,mid);
     MergeSortR(A,mid+1,h);
     Merge(A,l,mid,h);
   }

}


int main()
{
 int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;

 //IMergeSort(A,9);

 MergeSortR(A,0,9);
 
 for(i=0;i<10;i++)
 printf("%d ",A[i]);
 printf("\n");

 return 0;
}