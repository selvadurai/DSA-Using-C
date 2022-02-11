#include<stdio.h>
#include <stdlib.h>


//Array Value
int * buildArr(int size){
   
   //create pointer
   int *p;

   //Initalizes array in heap   
   p = (int*) malloc(size  * sizeof(int));

   //Assign Random Values to the array
   for(int i=0; i<size;i++){
       p[i]=rand(); 
   } 

   return p; 
}

//Prints Array
void printArrayPoint(int *A,int n){
    for(int i=0;i<n;i++){
         printf("%d\n",A[i]);
    }
}

//Prints Array
void printArray(int A[],int n){
    for(int i=0;i<n;i++){
         printf("%d\n",A[i]);
    }
}

int main(){
  //Can use Pointer
  int *arr=buildArr(100000);  
  
  //Using Pointer
   printArrayPoint(arr,100000);
  
  //Using []
   printArray(arr,3);


   free(arr);

   return 0;
}
