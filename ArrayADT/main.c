#include <stdio.h>
#include <stdlib.h>

struct Array
{
   int A[100];
   int size;
   int length;
 
};

void swap(int *x,int *y);
int BinarySearch(struct Array arr,int key);

void display(struct Array arr){
    int i;
    printf("\n Elements are \n ");
    for(int i=0;i<arr.length;i++)
         printf("%d ",arr.A[i]);
}

void Append(struct Array *arr,int x){
    
    if(arr->length < arr->size)
      arr->A[arr->length++]=x;

}


int Delete( struct Array *arr,int index){

   int x=0;
   int i;

   if(index>=0 &&  index< arr->length) 
   {
      x=arr->A[index];

      for(i=index;i< arr->length-1;i++){
         arr->A[i]=arr->A[i+1];
      }

      arr->length--;

      return x;
   }


   return 0;
}


int LinearSearch(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){

       if(key==arr->A[i]){
        
         swap(&arr->A[i], &arr->A[i-1]);
         return i;
      
      }  
    }

    return -1;
}

int BinarySearch(struct Array arr,int key){
   int l,mid,h;
   l=0;
   h=arr.length-1;

   while(l<=h){
 
      mid=(l+h)/2;
      if(key==arr.A[mid])
        return mid;
      else if(key<arr.A[mid])
        h=mid-1;
      else 
        l=mid+1;   
   } 


   return -1;

}

int RbinSearch(int a[],int l,int h,int key)
{ 
   int mid;

   if(l<=h)
   {
      mid=(l+h)/2;
      if(key==a[mid])
         return mid;
      else if(key<a[mid])
        return RbinSearch(a,l,mid-1,key);
      else
       return RbinSearch(a,mid+1,h,key);    
        
   }

  return -1;
}



void Reverse(struct Array *arr){
   int *B;
   int i,j;
  
   B=(int *) malloc(arr->length*sizeof(int));

   for(i=arr->length-1, j=0; i>=0; i--,j++){
      B[j]=arr->A[i];
   }
   for(i=0;i < arr->length;i++){
      arr->A[i]=B[i];
   }

   free(B);
}


void Reverse2(struct Array *arr){
    int i,j;
    for(i=0,j=arr->length-1; i<j; i++,j)
    {
       swap(&arr->A[i],&arr->A[j]);
    }
}

int Get(struct Array arr, int index){
    
    if(index>=0 && index < arr.length){
      return arr.A[index];
    }

    return -1;  


}

void Set(struct Array *arr,int index, int x){

   if(index>=0 && index < arr->length){
      arr->A[index]=x;
   }
}

int Max(struct Array arr){
   
    int max=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++){
       if(arr.A[i]>max)
        max=arr.A[i];
    }

  return max;
}

void Rearrange(struct Array *arr){
   int i,j;
   i=0;
   j=arr->length-1;

   while(i<j)
   {
      while (arr->A[i]<0)i++;
      while (arr->A[i]>=0)j--;
      if(i<j)swap(&arr->A[i],&arr->A[j]);

      
   }
}


int Min(struct Array arr){
   
    int min=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++){
       if(arr.A[i]<min)
        min=arr.A[i];
    }

  return min;
}


int Sum(struct Array arr)
{
   int s=0;
   int i;
   for(i=0;i<arr.length;i++)
     s+=arr.A[i];
 
   return s;
}

float Avg(struct Array arr)
{
 
   return (float) Sum(arr)/arr.length;

}

void InsertSort(struct Array *arr, int x)
{
    int i=arr->length-1;
    
    if(arr->length==arr->size)
      return;

    while(i>=0 && arr->A[i] > x){
        arr->A[i+1]=arr->A[i];
        i--;

    }   
 
    arr->A[i+1]=x;
    arr->length++;
}

void Insert(struct Array *arr, int index, int x){
      int i;

     if(index>=0 && index <= arr->length)
     { 
        //Starts shifting array to the right  
        for(i=arr->length; i >index;i--){
           arr->A[i]=arr->A[i-1];
        }
       
      arr->A[index]=x;
      arr->length++;
          
     }

}


int isSorted(struct Array arr){

   int i;
   for(i=0;i<arr.length-1;i++)
   {
      if(arr.A[i]>arr.A[i+1])
        return 0;
   }

   return 1;

}



void swap(int *x,int*y){
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}

/* 
  How Merge works

  Array 1 element compares with Array 2 element
 
  1.If Array 1 is less than Array 2 then copy Array 1 element
    to Array 3. Then increment array1 which is i++. j will not 
    increment

  2. If Array 1 is greater than Array 2 then copy Array 2 element
    to Array 3. Then increment array1 which is j++. i will not increment 

*/
struct Array* Merge(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  
    while(i < arr1->length && j < arr2->length)
    {
          if(arr1->A[i] < arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
          else
             arr3->A[k++]=arr2->A[j++]; 
    }

    for(; i < arr1->length;i++)
      arr3->A[k++]=arr1->A[i];
    
    for(;j<arr2->length;j++)
      arr3->A[k++]=arr2->A[j]; 

    arr3->length=arr1->length+arr2->length;

    return arr3; 

}

/********* SETS****************************/


struct Array* Union(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  
    while(i < arr1->length && j < arr2->length)
    {
          if(arr1->A[i] < arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
          else if(arr2->A[j] < arr1->A[i])
             arr3->A[k++]=arr2->A[j++]; 
          else{
            arr3->A[k++]=arr1->A[i++];
            j++; 
          }
    }

    for(; i < arr1->length;i++)
      arr3->A[k++]=arr1->A[i];
    
    for(;j<arr2->length;j++)
      arr3->A[k++]=arr2->A[j]; 

    arr3->length=k;
    arr3->size=10;

    return arr3; 

}


struct Array* Intersection(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  
    while(i < arr1->length && j < arr2->length)
    {
          if(arr1->A[i] < arr2->A[j])
              i++;
          else if(arr2->A[j] < arr1->A[i])
              j++; 
          else if(arr1->A[i]==arr2->A[j])
          {
            arr3->A[k++]=arr1->A[i++];
            j++; 
          }
    }

    arr3->length=k;
    arr3->size=10;

    return arr3; 

 }


struct Array* Difference(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  
    while(i < arr1->length && j < arr2->length)
    {
          if(arr1->A[i] < arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
          else if(arr2->A[j] < arr1->A[i])
             j++; 
          else{
            i++;
            j++; 
          }
    }

    for(; i < arr1->length;i++)
      arr3->A[k++]=arr1->A[i];
   

    arr3->length=k;
    arr3->size=10;

    return arr3; 

}





int main(){
                     //Array   //size //length
   struct Array arr={{2,3,5,6,7},100,5};


   InsertSort(&arr, 1);
   InsertSort(&arr, 4);

   printf("Is Array Sorted %d \n",isSorted(arr));


   display(arr);
   
   printf("\n");
  
   Append(&arr,10);
   Insert(&arr,0,10);
   Append(&arr,77);

    InsertSort(&arr, 4);
   display(arr);

   printf("\n");
  


   //printf("%d\n",LinearSearch(&arr,4));
   printf("%d\n",BinarySearch(arr,77));    
   printf("\n");
   printf("%d\n",RbinSearch(arr.A,0,arr.length,77));

   //printf("%d\n",Delete(&arr,4));

   printf("********************************\n");
   printf("Get value = %d\n",Get(arr,5));  
   
   Set(&arr,7,100);   
  
   display(arr);

   printf("Max is  = %d\n",Max(arr));
   printf("Min is  = %d\n",Min(arr));
   printf("AVG is  = %f\n",Avg(arr));  
   printf("Sum is  = %d\n",Sum(arr));  

   Reverse(&arr);

   display(arr);
   printf("\n");

   Reverse2(&arr);

   display(arr);
   printf("\n");
  
   InsertSort(&arr, 4);

   display(arr);

   printf("\n");


   printf("Is Array Sorted %d \n",isSorted(arr));

   printf("\n");


   struct Array arr1={{2,6,10,15,25},10,5};
   struct Array arr2={{3,6,7,15,20},10,5};
  
   struct Array *arr3;
   arr3=Difference(&arr1,&arr2);

   display(*arr3);

   free(arr3);

      printf("\n");

   return 0;
}