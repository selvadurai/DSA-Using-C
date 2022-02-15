#include<stdio.h>

//Static 

//Recursion with Static Variable
int fun(int n)
{
    static int x=0;
    if(n>0)
    {  
        x++;
        return fun(n-1)+x;
    }

   return 0;
}


//Global 

int GLOBAL=0;

//Recursion with GLobal variable
int funGlo(int n)
{
    if(n>0)
    {  
        GLOBAL++;
        return funGlo(n-1)+GLOBAL;
    }

   return 0;
}

int main() {
  int r;
  r=fun(5);
  printf("%d \n ",r);
  
  //Output 25


  int g;

  g=funGlo(5);
  printf("%d \n",g);
  
  //Output 25


  return 0;

}