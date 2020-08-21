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
    struct Node *temp,*head;
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
        temp = (struct Node *)malloc(sizeof(struct Node));
        if (temp == NULL)
        {
            printf("Not Allocated!!!");
            exit -1;
        }
        else
        {
            printf("Enter data: %d ",i);
            scanf("%d",&num);
            temp->data = num;
            temp->next = NULL;
            head->next =temp;
            head = temp;
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
int Length(struct Node *temp)
{
    int count = 0;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
    
}
int main()
{   int x;
    printf("Enter size the of Linked List:  ");
    scanf("%d",&x);
    create(x); 
    printf("\n");
    printf("Element of Linked List:\n");
    Display();
    printf("\n");
    printf("Length of List: %d",Length(first));


    return 0;
}