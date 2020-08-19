/*
    delete  a first  linked - list 
*/

#include<stdio.h>
#include<stdlib.h>
struct Node
{
     int data ;
     struct Node *next;
}*first = NULL;
void create(int n)
{
    int i,num;
    struct Node *t,*head;
    first = (struct Node *)malloc(sizeof(struct Node ));
    if (first == NULL)
    {
        printf("not allocated: ");
    }
    else
    {
        printf("Enter data for node 1: ");
        scanf("%d",&num);
        first->data=num;
        first->next=NULL;
        head  = first;
    }
   
    for ( i = 2; i <= n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        if (t == NULL)
        {
            printf("Not allocated :");
            break;
        }
        else
        {
            printf("Enter data for node %d: ",i);
            scanf("%d",&num);
            t->data = num;
            t->next = NULL;
            head->next =t;
            head = t;
        }
        
        
    }
}
void delete()
{   int pos = 1;
    struct Node *head = first;
    if (pos == 1)
    {
        first = first->next;
        free(head);
        return;
    }
    else
    {
        printf("Not delete\n");
    }
    
    
}
void Display()
{
    struct Node *p;
    p  = first;
    while (p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
}
int main()
{
    struct Node *temp;
    
    create(5);
    printf("\n");
   delete(); 
    Display();

    return 0;
}