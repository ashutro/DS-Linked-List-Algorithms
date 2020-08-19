/*
    #List delete any element from any position:
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
    struct Node *tmp,*head;
    first = (struct Node *)malloc(sizeof(struct Node ));
    if (first == NULL)
    {
        printf("Not Allocated!!!");
        exit -1;
    }
    else
    {
        printf("Enter data: 1 ");
        scanf("%d",&num);
        first->data=num;
        first->next=NULL;
        head  = first;
    }

    for ( i = 2; i <= n; i++)
    {
        tmp = (struct Node *)malloc(sizeof(struct Node));
        if (tmp == NULL)
        {
            printf("Not Allocated!!!");
            exit -1;
        }
        else
        {
            printf("Enter data: %d ",i);
            scanf("%d",&num);
            tmp->data = num;
            tmp->next = NULL;
            head->next =tmp;
            head = tmp;
        }
        
        
    }
}
void delete(int position)
{
    struct Node *head = first, *temp;
    if(first == NULL)
    {
        printf("List is empty");
        return;
    }
    
    if(position == 1)
    {
        first = first->next;
        free(head);
        head = NULL;
    }
    else if(position>1)
    {   temp = first;
        for (int i = 1; i < position  && temp; i++)
        {   head = temp;
            temp = temp->next;
        }
        if(!temp)
        {
            printf("\nOut of Bound !!!");
        }
        else
        {
            head->next = temp->next;
            free(temp);
        }
        
    }
}
void Display()
{
    struct Node *head  = first;
    
    while (head!=NULL)
    {
        printf("%d  ",head->data);
        head=head->next;
    }

    
}
int main()
{   int x,pos;
    printf("Enter size the of Linked List:  ");
    scanf("%d",&x);
    create(x); 
    printf("\n");
    printf("Element of Linked List:\n");
    Display();
    printf("\n");
    printf("Enter Postion want to delete:   ");
    scanf("%d",&pos);
    delete(pos);
    printf("\n");
    Display();

    return 0;
}