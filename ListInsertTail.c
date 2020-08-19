/* 
    #Insert element at Last in Linked List:
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
    struct Node *temp,*head;
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
        temp = (struct Node *)malloc(sizeof(struct Node));
        if (temp==NULL)
        {
           printf("Not allocated !!!");
           break;
        }
        else
        {
             printf("Enter data for node %d: ",i);
            scanf("%d",&num);
            temp->data=num;
            temp->next=NULL;
            head->next=temp;
            head=temp;
        }
        
        
    }
    
    
    
}
void InsertLast()
{   int item;
    struct  Node *newNode,*postion,*head;
    postion = first;
    newNode = (struct Node *)malloc(sizeof(struct Node));
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
        head->next=newNode;
        newNode->next=NULL;
        
       
        
     return;   
    }
}
void Display()
{
    struct Node *postion;
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