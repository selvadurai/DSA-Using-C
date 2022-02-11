#include<stdio.h>

struct Rectangle
{
  int length;
  int breadth;
};

void fun(struct Rectangle *p)
{
   int sum=p->length*p->breadth;
   printf("%d\n",sum);
}

//Finds the sum of 
int sum(struct Rectangle *p)
{
   return p->length*p->breadth;
}

//Change length of structure
void setLength( struct Rectangle *p,int val){
   p->length=val;
}

int main(){
    
    struct Rectangle  r= {5,10};

    fun(&r);

    setLength(&r,3);

    printf("sum function is %d\n",sum(&r));
    

    return 0;
}
