#include <stdio.h>

void Insert(int A[],int n)
{
  int temp, i=n;
  temp=A[n];

  while(i>1 && temp >  A[i/2])
  {
    A[i]=A[i/2];
    i=i/2;
  }

  A[i]=temp;

}


  
// This function swaps values pointed by xp and yp
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}



void printHeap(int A[])
{
  int i;	
 
  for(i=0;i<=7;i++)
  {
    printf("%d ",A[i]);
  }  
 
 printf("\n");
}


int Delete(int A[],int n)
{
 int i,j,x,temp,val;
 val=A[1];
 x=A[n];
 A[1]=A[n];
 A[n]=val;
 i=1;j=i*2;
 while(j<=n-1)
 {
   if(j<n-1 && A[j+1]>A[j])
    j=j+1;
    if(A[i]<A[j])
    {
         temp=A[i];
 	A[i]=A[j];
 	A[j]=temp;
	 i=j;
 	j=2*j;
    }
     else
          break;
 }
 return val;
}







int main()
{
  int i;
  int A[]={0,10,20,100,25,5,40,35};
  
  for(i=2;i<=7;i++)
  {
    Insert(A,i);
  }	  

   printHeap(A);

   Delete(A,7);

   printHeap(A);
   
   return 0;
}
