#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p,*q;
  int i;
  
  //Allocate 5 spaces in memory
  p=(int*)malloc(5*sizeof(int));
  p[0]=3;p[1]=4;p[2]=7;p[3]=9;p[4]=11;
  
  //Allocate 100 spaces in memory
  q=(int*)malloc(100*sizeof(int));

  //Copy value from p to q
  for(i=0;i<5;i++){
       q[i] =p[i];
  }     
  
  //Delete memory in p pointer
  free(p);

  printf("********\n");
 
  //Copy q memory to p
  //P now as 100 spaces in memory
  p=q;


  for(i=0;i<5;i++){
     printf("%d \n",q[i]);
  }

  q=NULL;

  free(q);

}