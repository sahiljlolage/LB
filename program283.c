// Assignment scenario -- smallest element and largest
#include<stdio.h>
#include<stdlib.h>      // for malloc and  free 

// insertAtPos

typedef struct  Node 
{
    int data;
    struct Node *next;

}NODE, *PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE)); // 1

    newn->data = no;
    newn->next = NULL;      //2

    if(*Head == NULL)       // 3
    {
        *Head = newn;       // 4.
    }
    else
    {
            newn->next = *Head;     // 5
            *Head = newn;           // 6

    }

}
void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head -> data);
        Head = Head -> next;
    }
    printf("NULL \n");

}

int Minimum(PNODE Head)
{
    int iMin = 0;      // Arr[0] 

    if(Head == NULL)
    {
        return -1;
    }

    iMin = Head ->data;
    
    while(Head != NULL)
    {
        if(Head->data < iMin)
        {
            iMin = Head->data;
        }
        Head = Head->next;
    }
    return iMin;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    
    Display(First);
    
    iRet = Minimum(First);
    printf("Smallest element is : %d\n",iRet);


    return 0;

}