// Doubly circular
#include<iostream>
using namespace std;

typedef class node
{
    public:    
            int data;
            node *next;
            node *prev;

            node()  // default constructor
            {
                data = 0;
                next = NULL;
                prev = NULL;
            }
            node(int value) // parameterized constructor
            {
                data = value;
                next = NULL;
                prev = NULL;
            }
}NODE,*PNODE;

class LinkedList        // parent class 
{
    public: 
        PNODE First;
        int iCount;
        
        LinkedList()    // default constructor 
        {
            First = NULL;
            iCount = 0;           
        }
        // abstract methods 
        virtual void InsertFirst(int ino) = 0;
        virtual void InsertLast(int ino) = 0;
        virtual void InsertAtPos(int ino,int ipos) = 0;

        virtual void DeleteFirst() = 0;
        virtual void DeleteLast() = 0;
        virtual void DeleteAtPos(int ipos) = 0;
         // body of the remaining 2 methods    
         void Display()
         {
            PNODE temp = First;

            cout<<"Element of LinkedList are : "<<"\n";

            for(int icnt = 1; icnt <= iCount; icnt++)
            {
                cout<<"| "<<temp->data<<" |-> ";
                temp = temp->next;
            }
            cout<<"NULL"<<"\n";
         }
         int Count()
         {

            return iCount;
         }        
};

class DoublyCL : public LinkedList
{
    private:
            // PNODE First;
            PNODE Last;
            // int iCount;

    public:
            DoublyCL();
            ~DoublyCL();

            void InsertFirst(int ino);
            void InsertLast(int ino);
            void InsertAtPos(int ino,int ipos);

            void DeleteFirst();
            void DeleteLast();
            void DeleteAtPos(int ipos);

};


DoublyCL :: DoublyCL()
{
    Last = NULL;
}

DoublyCL :: ~DoublyCL()
{}
void DoublyCL :: InsertFirst(int ino)
{
    PNODE newn = new NODE(ino);

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    Last->next = First;
    First->prev = Last;
    iCount++;
}
void DoublyCL :: InsertLast(int ino) 
{
    PNODE newn = new NODE(ino);

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;
        Last = Last->next;

    }
    Last->next = First;
    First->prev = Last;
    iCount++;
}
void DoublyCL :: InsertAtPos(int ino,int ipos)
{}
void DoublyCL :: DeleteFirst()
{
    if(iCount == 0) // LL is empty
    {
        return;
    }
    else if(iCount == 1)    // contains one node 
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else        // more than one node 
    {
        First = First->next;
        delete Last->next;  // delete First->prev;
        
        First->prev = Last;
        Last->next = First;
    }

    iCount--;
}
void DoublyCL :: DeleteLast()
{
    if(iCount == 0) // LL is empty
    {
        return;
    }
    else if(iCount == 1)    // contains one node 
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else        // more than one node 
    {
        Last = Last->prev;
        delete Last->next;
        
        First->prev = Last;
        Last->next = First;
    }

    iCount--;
}
void DoublyCL :: DeleteAtPos(int ipos)
{}
            
int main()
{
    DoublyCL obj;
    
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.Display();
    cout<<"Length of Linked list is : "<<obj.Count()<<"\n";
    
    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    cout<<"Length of Linked list is : "<<obj.Count()<<"\n";

    return 0;
}