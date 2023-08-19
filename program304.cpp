#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

class SinglyLL
{
    private:
        PNODE First;       // characteristics
        int iCount;       // characteristics
        
    public:
        SinglyLL();   // constructor 
        // declaration of functions -- 
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

// Implementataions of all behaviours 

int main()
{   
        SinglyLL obj1();       // 12 byte allocate 
        

    return 0;
}