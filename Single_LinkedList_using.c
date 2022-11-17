#include<stdio.h>
#include<stdlib.h>

void insertAtBeginning(int);
void insertAtEnd(int);
void insertBetween(int,int,int);
void display();
void removeBeginning();
void removeEnd();
void removeSpecific(int);

struct Node
{
   int data;
   struct Node *next;
}*head = NULL,*tail=NULL;

void main()
{
   int choice,value,loc1,loc2;
   while(1){
      printf("\n****** MENU ******\n");
      printf("\n1. insertAtBeginning\n2. insertAtEnd\n3. insertBetween");
      printf("\n4. removeBeginning\n5. removeEnd\n6. removeBetween\n7. display\n8. exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){

        case 1: printf("Enter the value to be insert: ");
 		        scanf("%d",&value);
                insertAtBeginning(value);
 			break;
 		case 2: printf("Enter the value to be insert: ");
 		        scanf("%d",&value); 
                insertAtEnd(value);
 			break;
 		case 3: printf("Enter the value to be insert: ");
 		        scanf("%d",&value); 
                printf("Enter the two values where you wanto insert: ");
 			    scanf("%d%d",&loc1,&loc2);
 			    insertBetween(value,loc1,loc2);
			break;
        case 4: removeBeginning();
            break;
 		case 5: removeEnd();
 			break;
 		case 6: printf("Enter the value which you wanto delete: ");
 			scanf("%d",&loc2);
 			removeSpecific(loc2);
			break;
        case 7: display();
            break;
        case 8: exit(0);

	 default: printf("\n Invalid choice \n");
      }
   }
}

void insertAtBeginning(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode->next = NULL;
   if(head == NULL)
   {
      head = newNode;
      tail = newNode;
   }
   else
   {
      tail->next = newNode;
      tail = newNode;
   }
}
void insertAtEnd(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode->next = NULL;
   if(head == NULL)
	head = newNode;
   else
   {
      struct Node *temp = head;
      while(temp->next != NULL)
	temp = temp->next;
      temp->next = newNode;
   }
}
void insertBetween(int value, int loc1, int loc2)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(head == NULL)
   {
      newNode->next = NULL;
      head = newNode;
   }
   else
   {
      struct Node *temp = head;
      while(temp->data != loc1 && temp->data != loc2)
	temp = temp->next;
      newNode->next = temp->next;
      temp->next = newNode;
   }
}

void removeBeginning()
{
   if(head == NULL)
	printf("\n\nList is Empty");
   else
   {
      struct Node *temp = head;
      if(head->next == NULL)
      {
	 head = NULL;
	 free(temp);
      }
      else
      {
	head = temp->next;
	free(temp);
      }
   }
}
void removeEnd()
{
   if(head == NULL)
   {
      printf("\nList is Empty\n");
   }
   else
   {
      struct Node *temp1 = head,*temp2;
      if(head->next == NULL)
	head = NULL;
      else
      {
	 while(temp1->next != NULL)
	 {
	    temp2 = temp1;
	    temp1 = temp1->next;
	 }
	 temp2->next = NULL;
      }
      free(temp1);
   }
}
void removeSpecific(int delValue)
{
   struct Node *temp1 = head, *temp2;
   while(temp1->data != delValue)
   {
     if(temp1 -> next == NULL){
	printf("\nGiven node not found in the list");
	goto functionEnd;
     }
     temp2 = temp1;
     temp1 = temp1 -> next;
   }
   temp2 -> next = temp1 -> next;
   free(temp1);
   functionEnd:
}
void display()
{
   if(head == NULL)
   {
      printf("\nList is Empty\n");
   }
   else
   {
      struct Node *temp = head;
      printf("\n\nList elements are : \n");
      while(temp->next != NULL)
      {
	 printf("%d ",temp->data);
	 temp = temp->next;
      }
      printf("%d ",temp->data);
   }
}