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
    }
    else
    {
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
        
        }
        else
        {
            scanf("%d",&num);
            t->data = num;
            t->next = NULL;
            head->next =t;
            head = t;
        }
        
        
    }
}
void delete()
{
    struct Node *head = first,*temp = NULL;
    if (first->next == NULL)
    {
        free(first);
        first=NULL;
    }
    else
    {
        while (head->next != NULL)
        {
            temp = head;
            head=head->next;
        }
        free(temp->next);
        temp->next  = NULL;
        
        
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
    struct Node *t;
    create(3);
    printf("\n");
    Display();
    delete();
    printf("\n");
   Display();

    return 0 ;
}


