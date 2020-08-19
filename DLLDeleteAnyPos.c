/*
    #Create the doubly linked list:
*/
#include<stdio.h>
#include<stdlib.h>
struct DLLNode{
    int data;
    struct DLLNode *prev;
    struct DLLNode *next;
}*first = NULL;
void DLLCreate(int n)
{   int num;
    struct DLLNode *head,*temp;
    first = (struct DLLNode *)malloc(sizeof(struct DLLNode));
    if (first == NULL)
    {
        printf("Not allocated !!!");
        
    }
    else
    {
        printf("Enter data 1: ");
        scanf("%d",&num);
        first->data=num;
        first->prev=NULL;
        first->next=NULL;
        head=first;
    }
    for (int i = 2; i <=n; i++)
    {
        temp = (struct DLLNode *)malloc(sizeof(struct DLLNode));
        if (temp == NULL)
        {
            printf("Not Allocated !!!");
        
        }
        else
        {
            printf("Enter data %d: ",i);
            scanf("%d",&num);
            temp->data=num;
            temp->next=NULL;
            temp->prev=head;
            head->next=temp;
            head=temp;
        }
    }
}
void Delete(int pos)
{
    struct DLLNode *head = first, *temp,*temp2;
    if(pos == 1)
    {
        first = first->next;
        first->prev = NULL;
        free(head);
        head = NULL;
    }
    else if(pos > 1)
    {
        temp = first;
        for (int i = 1; i < pos && temp; i++)
        {
            temp = temp->next;
        }
        if (!temp)
        {
            printf("Out of bound !!!\n");
            return;
        }
        else if(temp)
        {
            temp2 = temp->prev;
            temp2->next = temp->next;
            if(temp-> next)
            {
                temp->next->prev = temp2;
            }
            free(temp);
            return;
            
            
                        

        }
        
    }
}
void display()
{
    struct DLLNode *head = first;
    while (head != NULL)
    {
        printf("%d  ",head->data);
        head=head->next;
    }
    return;
}
int main()
{
    int x,pos;
    printf("Enter size the of Linked List:  ");
    scanf("%d",&x);
    DLLCreate(x); 
    printf("\n");
    printf("Element of Linked List:\n");
    display();
    printf("\n");
    printf("Enter Postion want to delete:   ");
    scanf("%d",&pos);
    Delete(pos);
    printf("\n");
    display();
    return 0;
}

