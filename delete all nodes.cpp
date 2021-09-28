#include <stdio.h>
#include <stdlib.h>
struct node
 {
    int data;          
    struct node *next;
} *head;
void create(int n);
void delete();
void display();
int main()
{
    int n, ch;
    printf("Enter total number of nodes: ");
    scanf("%d", &n);
    create(n);
    printf("\n Data list \n");
    display();
    printf("\n Press 1 to delete entire list: ");
    scanf("%d", &ch);

    delete();
    printf("\n Data list \n");
    display();
    return 0;
}

void create(int n)
{
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL; 
        temp = head;

        
         
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);
                newNode->data = data; 
                newNode->next = NULL; 

                temp->next = newNode;
                temp = temp->next;
            }
        }

        printf("LINKED LIST CREATED \n");
    }
}

void delete()
{
    struct node *temp;

    while(head != NULL)
    {
        temp = head;
        head = head->next;

        free(temp);
    }

    printf("LIST DELETED \n");
}

void display()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("/n List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); 
            temp = temp->next;                 
        }
    }
}
