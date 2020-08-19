/*
    #delete complete linked-list:
*/
#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
}*first = NULL;
void create(int n)
{
    struct Node *t,*head;
    int num,i;
    first = (struct Node *)malloc(sizeof(struct Node));
    if (first == NULL)
    {
        printf("Not allocted !!! ");
    }
    else
    {
        
        printf("Enter the data node 1: ");
        scanf("%d",&num);
        first->data = num;
        first->next=NULL;
        head = first;
    }
    for ( i = 2; i <= n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        if (t==NULL)
        {
           printf("Not allocated !!!");
           break;
        }
        else
        {
             printf("Enter data for node %d: ",i);
            scanf("%d",&num);
            t->data=num;
            t->next=NULL;
            head->next=t;
            head=t;
        }
        
        
    }
    
    
    
}
void Display()
{
    struct Node *postion;
    postion =first;
    if (postion == NULL)
    {
        printf("Delete Complete!!!");
        return;
    }
    else
    {
        while (postion != NULL)
         {
             printf("%d ",postion->data);
             postion = postion->next;
         }
    }
    
    
}
void DeleteComplete()
{
    struct Node *temp, *head;
    head = first;
    while (head)
    {
        temp= head->next;
        free(head);

        head = temp;
    }
    first = NULL;
    
}
int main()
{
    int size,element,postion;
    printf("Enter the size of List: ");
    scanf("%d",&size);
    create(size);
    printf("\n");
    Display();
    printf("\n");
    DeleteComplete();
    Display();
    

    return 0;
}