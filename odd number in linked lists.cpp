
#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void odd();
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
		
		printf("\n 1 for  create \n 2 for view \n 3 to display odd numbers \n");
		printf("\nenter ur response ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:odd();
			break;
			default :printf("you response is wrong try again");
			return 0;
		}
	}
}

void create()
{
	int n,i;
	printf("enter the number of nodes you want ");
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
 
 
 void odd()
 {
 	struct node *ptr;
 	printf("the odd numbers in  list are :\n");
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		if(ptr->data%2!=0)
 		printf("%d\t",ptr->data);
 		ptr=ptr->next;
	 }
 }
 
