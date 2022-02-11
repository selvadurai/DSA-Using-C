#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
   int length;
   int breadth; 
};

int main(){
  
   struct Rectangle *p;

   //Casted pointer Struct Rectangle
   p=(struct Rectangle *) malloc(sizeof(struct Rectangle));
   
   p->length=15;
   p->breadth=7;

   printf("%d\n",p->length);
   printf("%d\n",p->breadth);

   free(p);
  
   //Free memory so it will be zero
   printf("%d\n",p->length);

   
   return 0;
}
