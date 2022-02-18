#include <stdio.h>
#include <stdlib.h>

int main()
{
  int A[3][4]={{1,2,3,4},{2,5,6,8},{1,3,5,7}};
  int *B[3];
  int **C;

  int i,j;

  B[0]=(int *)malloc(4*sizeof(int)); 
  B[1]=(int *)malloc(4*sizeof(int)); 
  B[2]=(int *)malloc(4*sizeof(int)); 
 
  //Allocated memory
  //Equvilant to C[3][4]
  C=(int **)malloc(3*sizeof(int)); 
  C[0]=(int *)malloc(4*sizeof(int)); 
  C[1]=(int *)malloc(4*sizeof(int)); 
  C[2]=(int *)malloc(4*sizeof(int)); 


  //Print A
  for(i=0;i<3;i++){
      for(j=0;j<4;j++){
          printf("%d ",A[i][j]);
      }
    printf("\n");
  }

  printf("\n");

   // Set C
  for(i=0;i<3;i++){
      for(j=0;j<4;j++){
          C[i][j]=rand() % 10;
            printf("%d " ,C[i][j]);
      }
    printf("\n");
  }

printf("%d ",C[2][3]);


  free(B[0]);
  free(B[1]);
  free(B[2]);

  free(C);


 

  return 0;
}