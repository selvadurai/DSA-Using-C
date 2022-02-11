#include<stdio.h>

struct Rectangle{
   int length;
   int breadth; 
};

int main(){
  
   struct Rectangle r={10,5};
    
   struct Rectangle *p=&r;
   
   printf("%d\n",p->length);
   printf("%d\n",p->breadth);

   return 0;
}
