//Doubly circular linked list 
#include<stdio.h>
#include<stdlib.h>


typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn= (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL ) && (*Tail == NULL)) // LL is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else            // LL contains at least one node
    {
        newn->next = *Head;
        (*Head)->prev = newn;

        *Head = newn;

    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;      // #


}
void Insertlast(PPNODE Head,PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn= (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL ) && (*Tail == NULL)) // LL is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else            // LL contains at least one node
    {
        (*Tail)->next = newn;
        newn->prev = *Tail;

        *Tail = newn;       // *Tail = *Tail->next

    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;      // #

}
void InsertAtPos(PPNODE Head,PPNODE Tail, int No,int iPos)
{}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{}
void DeleteLast(PPNODE Head,PPNODE Tail)
{}
void DeleteAtPos(PPNODE Head,PPNODE Tail,int iPos)
{}
void Display(PNODE Head,PNODE Tail)
{
    if(Head != NULL && Tail != NULL)
    {
        printf("<=>");
        do
        {
            printf("| %d | <=> ",Head->data);
            Head = Head->next;
        }while(Head != Tail->next);

        printf("\n");
    }
    else
    {
        printf("Linked List is empty\n");
    }

}
int Count(PNODE Head,PNODE Tail)
{
    int iCount = 0;

    if(Head != NULL && Tail != NULL)
    {
        do
        {
            iCount++;
            Head = Head->next;
        }while(Head != Tail->next);
        
        return iCount;
    }
    else
    {
        return 0;
    }    
    
    return 0;
}
    
int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;      // #
    int iRet = 0;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);
    
    Insertlast(&First,&Last,101);
    Insertlast(&First,&Last,111);
    Insertlast(&First,&Last,121);

    Display(First,Last);
    iRet = Count(First,Last);
    printf("Number of nodes are : %d\n",iRet);

    return 0;

}