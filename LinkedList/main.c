#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


struct Node
{
   int data;
   struct Node * next;
   
}; 

struct Node *first=NULL;


//Initilazing the Linked List
void create(int A[],int n)
{
  int i;
  struct Node *t,*last;
  first=(struct Node*) malloc(sizeof(struct Node));
  first->data=A[0];
  last=first;
  
  for(i=1;i<n;i++)
  {
     t=(struct  Node*)malloc(sizeof(struct Node));
     t->data=A[i];
     t->next=NULL;
     last->next=t;;
     last=t;
  }

}

void RDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        printf("%d ",p->data);
        RDisplay(p->next);
    }
};


void Display(struct Node *p)
{
    while(p!=NULL) 
    {
       printf("%d ",p->data);
       p=p->next;       
    }

}

int count(struct Node *p){
    int size=0;

    while(p){
       size++;
       p=p->next;       
    }

    return size;
}


int sum(struct Node *p){
    int total=0;

    while(p){
       total+=p->data;
       p=p->next;       
    }

    return total;
}

int Rsum(struct Node *p) 
{

  if(p==NULL)
    return 0;
   else
     return Rsum(p->next)+p->data; 

};


int Max(struct Node *p)
{
     int max=INT32_MIN;
      
     while(p)  
     {
            if(p->data > max){
               max=p->data;
            }
        p=p->next;    
     }   
   
    return max;

}

struct Node * LSearch(struct Node *p,int key)
{
   struct Node *q;

   while(p)
   {
    

       if(key==p->data)
       {
         //1.Move the Node after the Found Node, behind
         // the Node before the found Node     

         printf(" q %d \n",q->data); 
         
         //Breaks the bridge connection between the found node. 
         q->next=p->next;   
         printf(" q->next %d \n",q->next->data); 
         
         //2. Move the first Node to the Second Node
         p->next=first;
         printf(" p->next %d \n",p->next->data); 

         //3.  Make the found node, the first Node
         first=p;
         printf(" First %d \n",first->data); 


         //4. Return Found Node
         return p;
      } 
     
      q=p;
      p=p->next;

   }
   
    return NULL;
}

void Insert(struct Node *p,int index,int x )
{
    struct Node *t;
    int i;

    if(index < 0 || index > count(p) ){
       return;
    }
    
    //Initilize Node
    t=(struct Node *) malloc(sizeof(struct Node));
    
    t->data=x;

    if(index == 0)
    {
        t->next=first;
        first=t;
    }
    
    //Find the Node before Index Position
    for(i=0;i<index-1;i++){
       p=p->next;
    }

    //1. Insert the Node after the Indexed Node
    t->next=p->next;

    //2. Insert a Node after Index -1 
    p->next=t;
    
}


void Append(struct Node *p,int x){
  
   

   if(p==NULL){
      p=NULL; 
      p=(struct Node *) malloc(sizeof(struct Node));
      p->data=x;
      p->next=NULL;
      //printf("%d\n",p->data);
   }

   struct Node *t,*temp;
   
   t=(struct Node *) malloc(sizeof(struct Node));
   t->data=x;
  
   while(p){
       temp=p;
       p=p->next;
    }
    
    temp->next=t;

   

}



void Destroy(struct Node *p){

    struct Node *temp=NULL;
    
    while(p!=NULL){
       temp=p;
        p=p->next; 
       free(temp);      
    }

    printf("Linked List is Destroyed \n");

}

int main()
{

   
   
   /*
    int A[]={3,5,7,10,25,8,32,2};
    create(A,8);




    Display(first); 
    printf("\n"); 
    RDisplay(first);
    printf("\n");
    printf("%d \n",count(first));
    printf("\n");
    printf("%d \n",sum(first));
    printf("\n");
    printf("%d \n",Rsum(first));
    printf("\n");
    printf("Max Sum is %d \n",Max(first));
    
    
    struct Node *temp;
    temp=LSearch(first,8);
    printf("Node value found %d  \n",temp->data);
    Insert(first,5,99);
   // Insert(first,2,79);
    //Append(first,77);
    //Append(first,177);

   */

    struct Node *node=NULL;

    Append(node,88);
    //Append(first,100);
    printf("\n");
    Display(node);
    printf("\n");



    

    
    Destroy(node);



    return 0;
}