#include<stdio.h>
#include<stdlib.h>  // free and malloc

typedef struct Node 
{
    int data;
    struct Node *next;
    struct Node *prev;      // # -- indicates added new line with refering to previous codes 
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;          // #

    if(*Head == NULL)       // LL is empty
    {
        *Head = newn;
    }
    else                // LL contains at least one node in it
    {
        (*Head)->prev = newn;       // #
        newn->next = *Head;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;          // #

    if(*Head == NULL)       // LL is empty
    {
        *Head = newn;
    }
    else                // LL contains at least one node in it
    {
        
    }
}
void InsertAtPos(PPNODE Head,int no)
{

}
void DeleteFirst(PPNODE Head)
{

}
void DeleteLast(PPNODE Head)
{

}
void DeleteAtPos(PPNODE Head,int iPos)
{

}

void Display(PNODE Head)
{
    
}

int Count(PNODE Head)
{

    return 0;
}

int main()
{
    PNODE First = NULL;

    return 0;
}