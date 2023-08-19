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
    
}
void Insertlast(PPNODE Head,PPNODE Tail, int No)
{

}
void InsertAtPos(PPNODE Head,PPNODE Tail, int No,int iPos)
{}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{}
void DeleteLast(PPNODE Head,PPNODE Tail)
{}
void DeleteFirst(PPNODE Head,PPNODE Tail,int iPos)
{}
void Display(PNODE Head,PNODE Tail)
{}
int Count(PNODE Head,PNODE Tail)
{
    return 0;
}
    
int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;      // #
    int iRet = 0;

    
    return 0;

}