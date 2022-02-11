#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

void init(struct Rectangle *r,int a,int b)
{
    r->length=a;
    r->breadth=b;
};


int area(struct Rectangle *r)
{
   return r->length*r->breadth;
};


int setLength(struct Rectangle *r,int val)
{
   r->length=val;
};

int main(){

    struct Rectangle r;

    init(&r,1,10);
    setLength(&r,3);

    printf("%d\n",area(&r)); 

    return 0;
}
