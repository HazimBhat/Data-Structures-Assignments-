#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void ascending();
void descending();
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
		printf("\n 1 to  create the linked list \n 2 to view \n 3 for linked list in ascending order\n 4 for sorting list in descending order ");
		printf("\nplease enter ur choice ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:ascending();
			break;
			case 4:descending();
			break;
			default :printf(" your response is wrong try again ");
			return 0;
		}
	}


}

void create()
{
	int n,i;
	printf("enter the number of nodes you want  ");
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
  
  
  void ascending()
  {
  	int element;
  	struct node *ptr=head,*cpt;
  	while(ptr!=NULL)
  	{
  		cpt=ptr->next;
  		while(cpt!=NULL)
	    {
  		    if(ptr->data>cpt->data)
  		   {   
  		    element=ptr->data;
  		    ptr->data=cpt->data;
  		    cpt->data= element;
		    }
	    cpt=cpt->next;
	    }
	  
   	 ptr=ptr->next;  
    }
    	 printf("elements sorted in ascending order\n");
	 view();	  
}
    
    
    
  void descending()
  {
  	int element;
  	struct node *ptr=head,*cpt;
  	while(ptr!=NULL)
  	{
  		cpt=ptr->next;
  		while(cpt!=NULL)
	    {
  		    if(ptr->data<cpt->data)
  		   {   
  		    element=ptr->data;
  		    ptr->data=cpt->data;
  		    cpt->data= element;
		    }
	    cpt=cpt->next;
	    }
	  
   	 ptr=ptr->next;  	  
    }
     printf("elements sorted in descending order\n");
    view();  
}
