#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void prime();
struct node   
{  
    char name[30];
    int age;
    float marks;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("\n Press ");
		printf("\n 1 to  create \n 2 to display the student details ");
		printf("\n Enter your response ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			default :printf("your response is wrong  try again!");
			return 0;
		}
	}
}

void create()
{
	int n,i;
	printf("enter number of nodes you want to create ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n student %d",i+1);
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("\Name of the student: ");
		scanf("%s",&temp->name);
		printf("\nAge of the student: ");
		scanf("%d",&temp->age);
		printf("\nMarks of the student: ");
		scanf("%f",&temp->marks);
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
 	printf("\nstudent details are as\n");
 	while(ptr!=NULL)
 	{
 		printf("name =%s\t",ptr->name);
 		printf("age =%d\t\t",ptr->age);
 		printf("marks =%f\n",ptr->marks);
 		ptr=ptr->next;
	}
	printf("\n");
 }
 
