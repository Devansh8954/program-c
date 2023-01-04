#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();

struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL,*start=NULL,*tmp,*newNode;

void main()
{
   int choice, value;
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &value);
		 enqueue(value);
		break;
	 case 2: dequeue(); 
      break;
	 case 3: display();
       break;
	 case 4: exit(0); 
	 default: printf("\n Invalid choice \n");
      }
   }
}
void enqueue(int value)
{
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(start == NULL)
      front = rear = start = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
}
void dequeue()
{
   if(start == NULL)
      printf("\nQueue is Empty\n");
   else{
      tmp=front;
      front = front -> next;
      printf("\nDeleted element: %d\n", tmp->data);
      start=front;
      free(tmp);
   }
}
void display()
{
   if(start == NULL)
      printf("\nQueue is Empty\n");
   else{
      tmp = front;
      while(tmp->next != NULL){
	     printf(" %d",tmp->data);
	     tmp = tmp -> next;
      }
      printf(" %d\n",tmp->data);
   }
}