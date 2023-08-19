#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int Data;
    struct Node *next;      //self referencial sturcture

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
    PPNODE First = NULL;

    return 0;
}