#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node * lchild;
    int data;
    int height;
    struct Node * rchild;
};

struct Node *root=NULL;


int NodeHeight(struct Node * p)
{
   int hl,hr;

   if(p==NULL) return 0;
   hl= p && p->lchild?p->lchild->height:0;
   hr= p && p->rchild?p->rchild->height:0;

   return hl>hr?hl+1:hr+1;
}


int Height(struct Node *p)
{
  int x,y;  
  if(p==NULL) return 0;
  x=Height(p->lchild);
  y=Height(p->rchild);
  return x>y?x+1:y+1;
}


int BalanceFactor(struct Node * p)
{
   int hl,hr;
   hl= p && p->lchild?p->lchild->height:0;
   hr= p && p->rchild?p->rchild->height:0;

   return hl-hr;
}


struct Node * LLRotation(struct Node * p)
{
 
   struct Node *pl=p->lchild;
   struct Node *plr=p->rchild;
  
   pl->rchild=p;
   p->lchild=plr;
   p->height=NodeHeight(p);
   pl->height=NodeHeight(pl);

   if(root==p)
     root=pl;

   return pl;
}


struct  Node * LRRotation(struct Node * p)
{
    struct Node *pl=p->lchild;
    struct Node *plr=pl->rchild;

    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;

    plr->lchild=pl;
    plr->rchild=p;
  
    pl->height=NodeHeight(pl);
    p->height=NodeHeight(p);
    plr->height=NodeHeight(plr);

    
    if(root==p)
       root=plr;

    return plr;
    
}


struct  Node * RRRotation(struct Node * p){
    struct Node *pr=p->rchild;
   struct Node *prl=p->lchild;
  
   pr->lchild=p;
   p->rchild=prl;
   p->height=NodeHeight(p);
   pr->height=NodeHeight(prl);

   if(root==p)
     root=pr;

   return pr;
 
    
}


struct  Node * RLRotation(struct Node * p){
      struct Node *pr=p->rchild;
    struct Node *prl=pr->lchild;

    pr->lchild=prl->rchild;
    p->rchild=prl->lchild;

    prl->rchild=pr;
    prl->lchild=p;
  
    pr->height=NodeHeight(pr);
    p->height=NodeHeight(p);
    prl->height=NodeHeight(prl);

    
    if(root==p)
       root=prl;

    return prl;
    
}


struct Node * Search(int key)
{
    struct Node *t=root;

    while(t!=NULL)
    {
       if(key==t->data)
          return t;
       else if(key < t->data)  
          t=t->lchild;
       else
          t=t->rchild;
    }
    
    return NULL;
}



struct Node * RInsert(struct Node *p,int key)
{
   struct Node *t=NULL;

   if(p==NULL)
   {
       t=(struct  Node* ) malloc(sizeof(struct Node));
       t->data=key;
       t->height=1;
       t->lchild=t->rchild=NULL;
       return t;
   }

   if(key < p->data)
      p->lchild=RInsert(p->lchild,key);
   else if(key > p->data)
      p->rchild=RInsert(p->rchild,key);  

    
    p->height=NodeHeight(p);
    
     if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1 )
        return LLRotation(p);
     else if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==-1 )  
        return  LRRotation(p);
     else if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==-1)
        return RRRotation(p);
     else if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==-1) 
        return RLRotation(p);  
    
    return p;
}

void Inorder(struct Node *p)
{
  if(p)
  {
    Inorder(p->lchild);
    printf("%d ",p->data );
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

struct Node *InSucc(struct Node * p)
{
  while(p && p->lchild!=NULL)
    p=p->lchild;
   
   return p;
};

struct Node *InPre(struct Node * p)
{
  while(p && p->rchild!=NULL)
    p=p->rchild;

   return p;
};


struct Node * Delete(struct Node *p,int key)
{
  struct Node * q;

  if(p==NULL)
     return NULL;

  if(p->lchild==NULL && p->rchild==NULL)
  {
      if(p==root){
        root=NULL;
      }  
      free(p); 
      return NULL;  
  }    
  
  
  if(key < p->data)
     p->lchild=Delete(p->lchild,key);
  else if(key > p->data)
     p->rchild=Delete(p->rchild,key);
  else
  {
    
     if(NodeHeight(p->lchild) > NodeHeight(p->rchild))
      {
         q=InPre(p->lchild);
         p->data=q->data;
         p->lchild=Delete(p->lchild,q->data);   
      }
     else
      {
          q=InSucc(p->rchild);
          p->data=q->data;
          p->rchild=Delete(p->rchild,q->data);
       }

   }     

    p->height = NodeHeight(p);
 
    // Balance Factor and Rotation
    if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1) {  // L1 Rotation
        return LLRotation(p);
    } else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1){  // L-1 Rotation
        return LRRotation(p);
    } else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1){  // R-1 Rotation
        return RRRotation(p);
    } else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1){  // R1 Rotation
        return RLRotation(p);
    } else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 0){  // L0 Rotation
        return LLRotation(p);
    } else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 0){  // R0 Rotation
        return RRRotation(p);
    }


   return p;
}

void DestroyTree(struct Node *p)
{
  if(p)
  {  
     DestroyTree(p->lchild);
     DestroyTree(p->rchild);
     //if(p)
        free(p);
  }else
  {
    return;
  }

}



int main()
{
     root=RInsert(root,10);
          RInsert(root,20);
          RInsert(root,3);
          RInsert(root,30);
          RInsert(root,76);
          RInsert(root,60);
          RInsert(root,333);
          RInsert(root,276);
          RInsert(root,1);
          RInsert(root,7);
          RInsert(root,8);


     
       Delete(root,76);
       Inorder (root);
       printf("\n");
       Postorder(root);
       printf("\n");




    //printf("Root is %d\n",root->data);
   // struct Node * found =Search(76);
    //printf("Search found %d \n",found->data);

    //printf("Root lchild is %d\n",root->lchild->data);
    //printf("Root rchild is %d\n",root->rchild->data);
      //  printf("Root rchild is %d\n",root->rchild->rchild->data);

      printf("Balanced Factor is %d \n",BalanceFactor(root));   

          printf("\n");

     //  DestroyTree(root);



    return 0;
}