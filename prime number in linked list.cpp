
#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void prime();
int isprime(int);
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
		p
		printf("\n 1 to create \n 2 to view \n 3 to display prime numbers ");
		printf("\n enter ur response ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:prime();
			break;
			default :printf("your response is wrong try again");
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
 
 int isprime(int n)
 {
 int i;
 for(i=2;i<=n/2;i++)
 {
 	if(n%i==0)
 	return 0;
 else
 return 1;
}
 }
  
 void prime()
 {
 	struct node *ptr;
 	ptr=head;
 	printf("\nprime numbers in the list are :\n");  
    while(ptr!=NULL)
{
	int p=isprime(ptr->data);
	if(p==1)
	printf("%d\t",ptr->data);
	ptr=ptr->next;
}
  }
  
