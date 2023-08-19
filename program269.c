#include<stdio.h>
#include<stdlib.h>  // free and malloc

typedef struct Node 
{
    int data;
    struct Node *next;
    struct Node *prev;      // # -- indicates added new line with refering to previous codes 
}NODE,*PNODE,**PPNODE;

int main()
{
    PNODE First = NULL;

    return 0;
}