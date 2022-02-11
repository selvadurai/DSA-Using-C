#include<stdio.h>

struct Student{
   int studentNum;
   char name[20];  
};

int main(){
    
    struct Student s ={101,"Bella"};
    
    printf(" Student name is %s  and student number is %d  \n",s.name,s.studentNum);
    return 0;
}

