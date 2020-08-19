/* 
    #Insert element at Last in Linked List:
*/
#include<stdio.h>
#include<stdlib.h>
struct DLLInsert
{
    int data ;
    struct DLLInsert *prev;
    struct DLLInsert *next;
}*first = NULL;
void create(int n)
{   int num,i;
    struct DLLInsert *head,*temp;
    first =(struct DLLInsert *)malloc(sizeof(struct DLLInsert));
    if (first == NULL)
    {
        printf("Not Allocated !!!");
        return;
    }
    else
    {
        printf("Enter data 1: ");
        scanf("%d",&num);
        first->data=num;
        first->prev=NULL;
        first->next=NULL;
        head = first;
    }
    for ( i = 2; i <= n; i++)
    {
        temp = (struct DLLInsert * )malloc(sizeof(struct DLLInsert));
        if (temp == NULL)
        {
            printf("NOT Allocated !!!");
            return;
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
    return;
}
void InsertLast()
{   int item;
    struct  DLLInsert *newNode,*postion,*head;
    postion = first;
    newNode = (struct DLLInsert *)malloc(sizeof(struct DLLInsert));
    if (!newNode)
    {
        printf("Memoery Error !!!");
        exit -1;
    }
    else
    {   
        printf("Enter the element insert at Last:    ");
        scanf("%d",&item);
        newNode->data=item;
        while (postion != NULL)
        { 
            head = postion;
            postion=postion->next;
            
        }
        newNode->prev = head;
        head->next=newNode;
        newNode->next=NULL;
        return;   
    }
}
void Display()
{
    struct DLLInsert *postion;
    postion  = first;
    while (postion!=NULL)
    {
        printf("%d\n",postion->data);
        postion=postion->next;
    }
}
int main()
{   int size;
    printf("Enter the size of List: ");
    scanf("%d",&size);
    create(size);
    printf("\n");
    Display();
    printf("\n");
    InsertLast();
    printf("\n");
    Display();


    return 0;
}