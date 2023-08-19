#include<iostream>
using namespace std;

typedef class node
{
    public: 
        int data;
        node *next;

}NODE,*PNODE;

class stack
{
    private:
            PNODE First;
            int iCount;

    public:
            stack();
            void Push(int no);
            int pop();
            void Display();
            int Count();


};

stack :: stack()
{
    First = NULL;
    iCount = 0;
}
void stack :: Push(int no)      // InsertLast
{
    PNODE newn = new NODE(no);

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}
int stack::pop()        // deleteLast
{
    int Value = 0;

    if(iCount == 0)
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    else if(iCount == 1)
    {
        Value = First->data;
        delete First;
        First = NULL;
    }
    else
    {
        PNODE temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        Value = temp->next->data;
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;

    return Value;
}
void stack::Display()
{
    cout<<"Elements of stack are : \n";
    PNODE temp = First;

    for(int icnt = 1; icnt <= iCount; icnt++)
    {
        cout<<First->data<<"\n";
        temp = temp->next;
    }
}
int stack::Count()
{
    return iCount;
}
int main()
{

    return 0;
}