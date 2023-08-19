#include<stdio.h>
#include<stdlib.h>      // for malloc and  free 

// insertlast

struct  Node 
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
    PNODE newn = NULL;
    // allocate memory for node 
    newn = (PNODE)malloc(sizeof(NODE));

    // initialise the node 
    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)  // LL is empty
    {
        *Head = newn;
    }
    else        // LL contains at least one node 
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)                // change 
{
    printf("Elements of Linked list are : \n");

    while(Head != NULL)
    {
        printf("|%d| -> ",Head->data);
        Head = Head->next;

    }
    printf("NULL\n");
}

int count(PNODE Head)
{
    int iCount = 0;
    while(Head != NULL)
    {
        iCount++;
        Head = Head->next;
    }
    return iCount;
}

void InsertLast(PPNODE Head,int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head; 
    // allocate memory for node 
    newn = (PNODE)malloc(sizeof(NODE));

    // initialise the node 
    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)  // LL is empty
    {
        *Head = newn;
    }
    else        // LL contains at least one node 
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }    
}
void InsertAtPos(PPNODE Head,int No,int Pos)
{
    
}
void DeleteFirst(PPNODE Head)
{

}
void DeleteLast(PPNODE Head)
{

}
void DeleteAtPos(PPNODE Head,int Pos)
{

}

int main()
{

    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,111);     // InsertFirst(60,51);
    InsertFirst(&First,101);     // InsertFirst(60,51);
    InsertFirst(&First,51);     // InsertFirst(60,51);
    InsertFirst(&First,21);     // InsertFirst(60,21);
    InsertFirst(&First,11);     // InsertFirst(60,11);

    Display(First);
    iRet = count(First);
    printf("No. of nodes are : %d\n",iRet);

    InsertLast(&First,121);
    InsertLast(&First,151);

    Display(First);
    iRet = count(First);
    printf("No. of nodes are : %d\n",iRet);

    return 0;
}

