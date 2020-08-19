#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first = NULL;
void Create(int size){
    int i, num;
    struct Node *tmp, *head;
    first = (struct Node *)malloc(sizeof(struct Node));
    if (first == NULL)
    {
        printf("Not Allocated!!!");
        exit -1;
    }
    else
    {
        printf("Enter data: 1 ");
        scanf("%d",&num);
        first ->data = num;
        first->next = NULL;
        head = first;
    }
    for ( i = 2; i <= size; i++)
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
            head ->next = tmp;
            head = tmp;
        }
    }
}
void Display()
{
    struct Node *postion;
    postion =first;
    while (postion != NULL)
    {
        printf("%d ",postion->data);
        postion = postion->next;
    
    }
}
void isEmpty(int size ){
    if (size == 0)
    {
        printf("\nList is Empty!!!");
        exit -1;
    }
    else
    {
        printf("\nList is not Empty\n");
        Display();
    }
}
int main(){
    int size;
    printf("Enter size the of Linked List:  ");
    scanf("%d",&size);
    if (size >0)
    {
        Create(size);
        isEmpty(size);
    }
    else
    {
        isEmpty(size);
    }
    return 0;

}