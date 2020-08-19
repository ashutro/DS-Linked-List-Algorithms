/*
    #Delete First the doubly linked list:
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
void DeleteBegining()
{
    struct DLLNode *head = first;
    first = first->next;
    free(head);
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
    int x;
    printf("Enter size the of Linked List:  ");
    scanf("%d",&x);
    DLLCreate(x); 
    printf("\n");
    printf("Element of Linked List:\n");
    display();
    DeleteBegining();
    printf("\n");
    display();
    return 0;
}

