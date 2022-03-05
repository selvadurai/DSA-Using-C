#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
#include "Stack.h"

struct Node *root=NULL;


void createTree()
{
    struct Node *p,*t;
    int x;
    struct Queue q;
    create(&q,100);

    printf("Enter Root Value: ");
    scanf("%d",&x);
    root=(struct Node *)malloc(sizeof(struct Node));
    root->data=x;

    root->lchild=root->rchild=NULL;
    enqueue(&q,root);

    while(!isEmpty(q))
    {
      p=dequeue(&q);
      printf("Enter Left Child of %d: ",p->data);
      scanf("%d",&x);
      if(x!=-1)
      {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        t->lchild=t->rchild=NULL;
        p->lchild=t;  
        enqueue(&q,t);
      }
    

     printf("Enter Right Child of %d: ",p->data);
      scanf("%d",&x);
      if(x!=-1)
      {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        t->rchild=t->lchild=NULL;
        p->rchild=t;  
        enqueue(&q,t);
      }
    }
}


void Preorder(struct Node *p)
{
  if(p)
  {
     printf("%d ",p->data);
     Preorder(p->lchild);
     Preorder(p->rchild);
  }

}

void Inorder(struct Node *p)
{
  if(p)
  {
     Inorder(p->lchild);
     printf("%d ",p->data);
     Inorder(p->rchild);

  }

}

void Postorder(struct Node *p)
{
  if(p)
  {
     Postorder(p->lchild);
     Postorder(p->rchild);
     printf("%d ",p->data);

  }

}

void IPreorder(struct Node *p)
{
    struct  Stack stk;
    StackCreate(&stk,100);

    while(p || !isEmptyStack(stk) )
    {
       if(p){
         printf("%d ",p->data);
         push(&stk,p);
         p=p->lchild;  
       }
       else
       {
         p=pop(&stk);
         p=p->rchild;
       }
    }
    

}

void LevelOrder(struct Node *p)
{
   struct Queue q;
   create(&q,100);

   printf("%d ",root->data);
   enqueue(&q,root);

   while (!isEmpty(q))
   {
     root=dequeue(&q);
     if(root->lchild)
     {
       printf("%d ",root->lchild->data);
       enqueue(&q,root->lchild);
     }

     if(root->rchild)
     {
       printf("%d ",root->rchild->data);
       enqueue(&q,root->rchild);
     }


   }
   
    
};


int count (struct Node * root)
{
  
   if(root){
     return count(root->lchild)+count(root->rchild)+1;
   }

   return 0; 

}

int height(struct Node * root)
{
  int x=0,y=0;
  if(root==0)
    return 0;
  

  x=height(root->lchild);
  y=height(root->rchild);  


  
  if(x>y)
    return x+1;
  else
    return y+1;  


}


void IInorder(struct Node *p)
{
    struct  Stack stk;
    StackCreate(&stk,100);

    while(p || !isEmptyStack(stk) )
    {
       if(p){
         push(&stk,p);
         p=p->lchild;  
       }
       else
       {
         p=pop(&stk);
         printf("%d ",p->data);
         p=p->rchild;
       }
    }
    

}






int main(){
  
  struct Queue q;

   createTree();
   Preorder(root);
   printf("\n");
   Postorder(root);
   printf("\n");
   Inorder(root);
   printf("\n");
   /*IPreorder(root);
   printf("\n");
   IInorder(root);
   printf("\n");
   LevelOrder(root);
   printf("\n"); */
   printf("Count %d \n",count(root));
   printf("\n");
   printf("Height %d \n",height(root));
   printf("\n");

   




    return 0;
}

