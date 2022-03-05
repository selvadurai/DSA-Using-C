#ifndef Stack_h
#define Stack_h

#include"Queue.h"

struct Stack{
  int size;
  int top;
  struct Node **items;
};

void StackCreate(struct Stack *st, int sz){
	st->items = (struct Node **)malloc(sizeof(struct Node));

	st->size = sz;
	st->top = -1;
}

void push(struct Stack *st, struct Node *value){
	if(st->top == st->size-1)
		printf("Stack overflow\n");
	else{
		st->top++;
		st->items[st->top] = value;
	}
}

/*
	* deletes the top value of the Stack
	* @param st pointer to the top pointer of Stack
	* @return removed value
*/

struct Node * pop(struct Stack *st){
	struct Node * removed = NULL;
	if(st->top == -1)
		printf("Stack underflow\n");
	else{
		removed = st->items[st->top];
		st->top--;
	}
	return removed;
}


/*
	* checks whether Stack is full or not
	* @return true or false
*/

int isFull(struct Stack st){
	if(st.top == st.size-1)
		return 1;
	else 
		return 0;
}

/*
	* checks whether Stack is empty or not
	* @return true or false
*/

int isEmptyStack(struct Stack st){
	if(st.top == -1)
		return 1;
	else
		return 0;
}

struct Node * StackTop(struct Stack st){
	if (st.top == -1){
		return NULL;
	}
	else{
		return st.items[st.top];
	}
}

struct Node * peek(struct Stack st, int index){
	struct Node *value = NULL;
	if(st.top-index+1 < 0)
		printf("invalid index\n");
	else{
		value = st.items[st.top-index+1];
	}
	return value;
}
#endif