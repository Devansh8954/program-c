#include<stdio.h>
#include <stdlib.h>
#define SIZE 5

void enQueue();
void deQueue();
void display();

int cQueue[SIZE], front = -1, rear = -1;

void main()
{
   int choice, value;
   while(1){
      printf("\n****** MENU ******\n");
      printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("\nEnter the value to be insert:  ");
		 scanf("%d",&value);
		 enQueue(value);
		 break;
	 case 2: deQueue();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\n Invalid choice \n");
      }
   }
}
void enQueue(int value)
{
   if((front == 0 && rear == SIZE - 1) || (front == rear+1))
      printf("\nCircular Queue is Empty\n");
   else{
      if(rear == SIZE-1 && front != 0)
	 rear = -1;
      cQueue[++rear] = value;
      if(front == -1)
	 front = 0;
   }
}
void deQueue()
{
   if(front == -1 && rear == -1)
      printf("\nCircular Queue is Empty\n");
   else{
      printf("\nDeleted element : %d\n",cQueue[front++]);
      if(front == SIZE)
	 front = 0;
      if(front-1 == rear)
	 front = rear = -1;
   }
}
void display()
{
   if(front == -1)
      printf("\nCircular Queue is Empty\n");
   else{
      int i = front;
      printf("\nCircular Queue Elements are : \n");
      if(front <= rear){
	 while(i <= rear)
	    printf("%d ",cQueue[i++]);
      }
      else{
	 while(i <= SIZE - 1)
	    printf("%d ", cQueue[i++]);
	 i = 0;
	 while(i <= rear)
	    printf("%d ",cQueue[i++]);
      }
   }
}