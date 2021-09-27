#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void max();
void min();
struct node   
{  
    int data;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf(" Press ");
		printf("\n 1 to  create the linked list \n 2 to view \n 3 to show the maximum element of the linked list \n 4 to show the minimum element of a linked list ");
		printf("\n enter your response ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:max();
			break;
			case 4:min();
			break;
			default :printf("your response is wrong try again ");
			return 0;
		}
	}


}

void create()
{
	int n,i;
	printf("enter the number of nodes  you want ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("enter your data ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(i==0)
		{
			head=temp;
			tail=temp;
		}
		else 
		{
			tail->next=temp;
			tail=temp;
		}
	}
 } 
 
 void view()
 {
 	struct node*ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		printf("%d\t",ptr->data);
 		ptr=ptr->next;
	}
	printf("\n");
 }
 

 
 void max()
 {
 	int max=head->data;
 	struct node *ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		if(max<ptr->data)
 		{
 			max=ptr->data;
		 }
		 ptr=ptr->next;
	 }
	 printf("\n maximum element of the linked list=%d\n",max);
 }
 
  
 void min()
 {
 	int min=head->data;
 	struct node *ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		if(min>ptr->data)
 		{
 			min=ptr->data;
		 }
		 ptr=ptr->next;
	 }
	 printf("\n minimum element of the linked list=%d\n",min);
 }
