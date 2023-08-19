//Singly circular linked list 
#include<stdio.h>
#include<stdlib.h>


typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))    // LL is empty
    {
        *Head = newn;
        *Tail = newn;       // #

        //(*Tail)->next = *Head;      // circular nature 

    }
    else                       // contains at least one node 
    {
        newn->next = *Head;
        *Head = newn;

        //(*Tail)->next = *Head;      // circular nature 
    }
    (*Tail)->next = *Head;      // # circular nature----common statement 
}
void InsertLast(PPNODE Head,PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))    // LL is empty
    {
        *Head = newn;
        *Tail = newn;       // #

        (*Tail)->next = *Head;      // circular nature 

    }
    else                       // contains at least one node 
    {
        (*Tail)->next = newn;
        *Tail = (*Tail)->next;      // *Tail = newn

    }
    (*Tail)->next = *Head;  
}
void InsertAtPos(PPNODE Head,PPNODE Tail, int No,int iPos)
{
    
}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{

} 
void DeleteLast(PPNODE Head,PPNODE Tail)
{

} 
void DeleteAtPos(PPNODE Head,PPNODE Tail,int iPos)
{

}
void Display(PNODE Head,PNODE Tail)     // call by value 
{
    if(Head != NULL && Tail != NULL)
    {
        do
        {
            printf("| %d | -> ",Head->data);
            Head  = Head->next;
        }while(Head != Tail->next);

        printf("\n");
    }
}
int Count(PNODE Head,PNODE Tail)        // call by value 
{
    return 0;
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;      // #

    return 0;

}