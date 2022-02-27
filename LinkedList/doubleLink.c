#include <stdio.h>
#include <stdlib.h>


struct Node
{
   int data;
   struct Node  * next;
   struct  Node * prev;  
}; 

struct Node * linkList=NULL;

void RDisplay(struct Node *p);
void Display(struct Node *p);

void Init(struct Node **head,int value)
{

   /*
     You deference the first pointer and then the second one.

      To access the data and next in the structure statement would like this

       (*ptr)->data = 5;
       (*ptr)->next = temp;
       brackets around ptr is required since -> has higher priority than *.

        -> is equivalent to writing *. (e.g. ptr->data is the same as *ptr.data).

   */

    //Initalize Node
    *head =(struct Node*) malloc(sizeof(struct Node));
    (*head)->data=value;
    (*head)->next=NULL;
    (*head)->prev=NULL;
 
}


int count(struct Node *p){
    int size=0;

    while(p){
       size++;
       p=p->next;       
    }

    return size;
}







void Append(struct Node * p,int x){
  
   
   struct Node *t,*temp;
   
   t=(struct Node *) malloc(sizeof(struct Node));
   t->data=x;


   if(p==NULL)
   {
     linkList=(struct Node *) malloc(sizeof(struct Node));
     linkList=t;
     linkList->next=NULL;
     linkList->prev=NULL;
     return;
   }


   while(p!=NULL ){
       temp=p;
       p=p->next;
   }

    temp->next=t;
    t->prev=temp;   
  
}



void Insert(struct Node *p,int index,int x )
{
    struct Node *t,*temp;
    int i;
    int size=count(p);

    if(index < 0 || index > size ){
       return;
    }
    
    //Initilize Node
    t=(struct Node *) malloc(sizeof(struct Node));
    
    t->data=x;

    if(index == 0)
    {
         printf("linkList %d \n",linkList->data);
         printf("linkList->next %d \n",linkList->next->data);
         
         t->next=linkList;

         linkList=t;
         
         linkList->next->prev=linkList;

        return;
    }
    
    //Find the Node before Index Position
    for(i=0;i<index-1;i++){
       temp=p; 
       p=p->next;
    }
    
    //1. Insert the Node after the Indexed Node
    t->next=p->next;
    t->prev=p;

    p->next->prev=t;
  
   //2. Insert a Node after Index -1 
    p->next=t;

    

}


int Delete(struct Node* p,int index){
    
    int i;
    struct Node *temp,*q=NULL;
     
    if( index < 1 || index >count(p) || p==NULL)
    {
       return -1;
    }
    


    if(index==1)
    {
         q=linkList;
         
         linkList=linkList->next;
         
         linkList->prev=NULL;
         
         free(q);
         return 1;
    }


    for(int i=0;i<index-1 && p;i++)
    {
      q=p;  
      p=p->next;
    }
    


    if(p){
      
       q->next=p->next;
       q->next->prev=q;

       free(p);
       return 1;
    }
  
   return 1;


}




void Display(struct Node *p)
{  
     
    while(p) 
    {
       printf("%d ",p->data);
       p=p->next;
    
    }


    printf("\n");
}


void RDisplay(struct Node *p)
{  
    struct Node *temp;
  
  
   
    while(p) 
    {  
       temp=p; 
       p=p->next;
    }
  
    while(temp)
    {
      printf("%d ",temp->data);
      temp=temp->prev;  
    }


    printf("\n");
}


void Destroy(struct Node *p){

    struct Node *temp=NULL;
    
    while(p!=NULL){
        p->prev=NULL;
        
        temp=p;
        p=p->next; 
       free(temp);      
    }

    printf("Linked List is Destroyed \n");

}



int main(){
  
   Append(linkList,10);
   Append(linkList,30);
  
   Append(linkList,1);
   Append(linkList,5);
   Append(linkList,98);
   Append(linkList,50);
   Append(linkList,77);
   Insert(linkList,2,99);


   
   for(int i=0;i<100;i++)
   {
    Append(linkList, rand() % 175);
   }

   
   Display(linkList);
   //RDisplay(linkList);


   Delete(linkList,4);


   printf("--------------------\n");

   Display(linkList);
   RDisplay(linkList);

   Destroy(linkList);

   linkList=NULL;


  
  return 0;
}