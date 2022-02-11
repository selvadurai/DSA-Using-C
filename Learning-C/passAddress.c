#include<stdio.h>


//Finds the sum of structure
void swapnumPassAdd(int *i, int *j) {
  int temp = *i;
  *i = *j;
  *j = temp;
  printf("i pointer value is %d \n",*i);
}


int main(){

     int a=3;
     int b=7;
      
    printf("A address is %p and B address is %p\n",&a,&b);

    swapnumPassAdd(&a,&b);

    printf("A value is %d and B value is %d\n",a,b); 
    
    printf("A address is %p and B address is %p\n",&a,&b);

    return 0;
}
