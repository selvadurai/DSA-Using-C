#include <stdio.h>

//Calling phase
void call(int n){

  if(n>0){
      printf("%d ",n);
      call(n-1);
  }


  
}


//Return phase
void rPhase(int n){

  if(n>0){
      rPhase(n-1);
      printf("%d ",n);
  }


  
}

int main() {
   int x=10;
   
   //Call by Phase
   call(x); 
   //Prints 3 2 1
   
   printf("\n");

   //Call by Return
   rPhase(x);
   //Prints 1 2 3

   printf("\n");
   
 
   return 0;

}