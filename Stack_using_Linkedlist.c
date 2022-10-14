#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();

struct Node {
   int data;
   struct Node *next;
}* top = NULL,*tmp;

void main() {
   int ch, val,n;
   xy:
   printf("\n 1. Push in stack \n");
   printf("\n 2. Pop from stack \n");
   printf("\n 3. Display \n");
   printf("\n Enter your choice \n");
   scanf("%d",&ch);
      switch(ch) {
         case 1: {
            push();
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         default: 
         printf("\n Invalid choice \n");
         break;
      }
    printf("\n Enter 1 to continue \n");
    scanf("%d",&n);
    if (n==1)
    {
        goto xy;
    }
}

void push() {
    int val;
    printf("\n Enter value to be pushed \n");
    scanf("%d",&val);
    tmp= (struct Node*) malloc(sizeof(struct Node));
    tmp->data = val;
    tmp->next = top;
    top = tmp;
}
void pop() {
   if(top==NULL)
   printf("Stack Underflow");
   else {
    printf("\n The pop element is %d \n",top->data);
      top = top->next;
   }
}
void display() {
   struct Node* ptr;
   if(top==NULL)
   printf("\n Stack is empty \n");
   else {
      ptr = top;
      printf("\n Stack elements are:\n");
      while (ptr != NULL) {
        printf("\n %d",ptr->data);
        ptr = ptr->next;
      }
   }
}
