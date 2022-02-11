#include<stdio.h>
#include<stdlib.h>


int main(){
   int *p;
   p=(int *)malloc(999999*sizeof(int));
   p[0]=100;
   p[1]=900;
   p[99]=99;

   printf("%d\n",p[0]+p[1]);
  
  for(int x=0;x<100;x++){
      if(p[x]!=0){
        printf("%d\n",p[x]);
      }  
   }
    
  free(p);



   int A[4]={2,3,8,10};
   int *p1;
   p1=A;

   for(int x=0;x<4;x++){
      printf("%d\n",p1[x]);
   }



   return 0;
}
