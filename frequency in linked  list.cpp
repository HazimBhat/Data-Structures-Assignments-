#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void count();
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
		printf("\n   1 to  create the linked list \n 2 to Display \n 3 To check the frequency of a given number in a linked list");
		printf("\n enter your response \n ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:count();
			break;
			default :printf("your choice is wrong try again \n!");
			return 0;
		}
	}


}

void create()
{
	int n,i;
	printf("please enter the number of nodes which you want to create \n ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("enter your data:");
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
  
  
  void count()
  {
  	int element,count=0;
  	struct node *ptr=head;
  	printf("enter the number whose frequency you want :\n");
  	scanf("%d",&element);
  	while(ptr!=NULL)
    {
      	if(ptr->data==element)
      	{
      		count++;
	    }
	    ptr=ptr->next;
	 }
     printf("the frequency of the number is: %d \n",count);
		  printf("\n");
  }
