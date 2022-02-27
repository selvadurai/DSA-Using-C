#include <stdio.h>
#include <stdlib.h>


struct Node
{
   int data;
   struct Node * next;
   
}; 

struct Node *circle=NULL;


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
    (*head)->next=*head;
 
}

int count(struct Node *p){
     int size=0;
     
     struct Node * head;

     head=p;
     
     static int flag=0;

     while(p!=head || flag==0){
       size++;
       p=p->next;       
       flag=1;
     }
      
     flag=0; 
    return size;
}




void Append(struct Node *p,int x){
  
   
   struct Node *t,*temp,*head;
   
   t=(struct Node *) malloc(sizeof(struct Node));
   t->data=x;
  
   head=p;

   if(p==NULL)
   {
     circle=(struct Node *) malloc(sizeof(struct Node));
     circle=t;
     circle->next=circle;
     return;
   }

   static int flag=0;

   while(p!=head || flag==0 ){
       temp=p;
       p=p->next;
       flag=1;
    }

    flag=0;
    
    temp->next=t;

    //Make the last node point to head
    t->next=head;

}


void Insert(struct Node *p,int index,int x )
{
    struct Node *t,*head;
    int i;

     //HEAD
     head=p;

     int size=count(p);

    if(index < 0 || index > count(p) ){
       return;
    }
   
    
    //Initilize Node
     t=(struct Node *) malloc(sizeof(struct Node));
     t->data=x;
    
     
     if(index == 0)
     {
        t->next=head;
        circle=t;

     
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


int Delete(struct Node* p,int index){
    
    int i;
    struct Node *q=NULL;
     
    if( index < 1 || index >count(p))
    {
       return -1;
    }
    


    if(index==1)
    {
        while(p->next!=circle)p=p->next;
         if(circle==p)
         {
          free(circle);
          circle=NULL;
         }
         else
             {
              p->next=circle->next;
              free(circle);
              circle=p->next;
            }


    }
   else{

    for(int i=0;i<index-1;i++)
    {
      q=p;  
      p=p->next;
    }

       q->next=p->next;
       free(p);
       return 1;    
   }
   return 1;


}




void Display(struct Node *p)
{  
    struct Node *head;
    head=p;
  
    static int flag=0;
   
    while(p!=head || flag==0) 
    {
       printf("%d ",p->data);
       p=p->next;
       flag=1;       
    }

    flag=0;
    printf("\n");
}



void Destroy(struct Node *p){

     struct Node *temp,*head=NULL;
     static int flag=0;

    head=p;
    
    while(p!=head || flag==0){
        temp=p;
        p=p->next; 
        free(temp);  
        flag=1;    
    }

    flag=0;

    printf("Linked List is Destroyed \n");

}



int main(){

  Append(circle,30);
  Insert(circle,1,67);
  Insert(circle,2,99);
  Append(circle,40);
  Insert(circle,5,55);



   Insert(circle,1,77);
   Insert(circle,0,88);
    Display(circle);

   Delete(circle,1);

   Display(circle);

  // Delete(circle.2);
   
  // Display(circle);

  

  /*
  for(int i=0;i<6;i++)
  {
    Append(circle, rand() % 175);
  }*/

  
  



  Destroy(circle);

  return 0;
}
