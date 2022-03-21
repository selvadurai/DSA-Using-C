#include "chains.h"
#include <stdio.h>

int hash(int key)
{
  return key%10;
 
}


void Insert(struct Node * H[],int key)
{
   int index=hash(key);
   SortedInsert(&H[index],key);
}


int main()
{
  struct Node *HT[10];
  struct Node *temp;

  int i;

  for(i=0;i<10;i++)
     HT[i]=NULL;
 
 
 Insert(HT,12);
 Insert(HT,42);

 temp=Search(HT[hash(12)],12);

 printf("%d ",temp->data);
 printf("\n ");


 struct Node * super=HT[2];

 Display(super);


 return 0;
}