#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();

struct Node {
   int data;
   struct Node *next;
}* front= NULL,*rear=NULL,*tmp;

void main() {
   int ch, val,n;
   xy:
   printf("\n 1. Enqueue in queue \n");
   printf("\n 2. Dequeue in stack \n");
   printf("\n 3. Display \n");
   printf("\n Enter your choice \n");
   scanf("%d",&ch);
      switch(ch) {
         case 1: {
            enqueue();
            break;
         }
         case 2: {
            dequeue();
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

void enqueue() {
    int val;
    printf("\n Enter value to be pushed \n");
    scanf("%d",&val);
    if (rear == NULL) {
    rear= (struct Node*) malloc(sizeof(struct Node));
    rear->data = val;
    rear->next = NULL;
    front=rear;
    }
    else {
      tmp=(struct node *)malloc(sizeof(struct node));
      rear->next = tmp;
      tmp->data = val;
      tmp->next = NULL;
      rear = tmp;
    }
}
void dequeue(); {
   if(front == NULL)
   printf("\n Queue Underflow \n");
    if (tmp->next != NULL) {
      tmp = temp->next;
      printf("\n Element deleted from queue is : %d \n",front->data);
      free(front);
      front = tmp;
     } 
    else {
      printf("\n Element deleted from queue is : %d \n",front->data);
      free(front);
      front = NULL;
      rear = NULL;
   }
}
void display() {
   tmp = front;
   if((front == NULL) && (rear == NULL)) 
   printf("\n "Queue is empty \n");

   else {
      ptr = top;
      printf("\n Queue elements are:\n");
      while(tmp != NULL) {
        printf("\n %d",tmp->data);
        tmp = tmp->next;
    }
}
