#include<iostream>
using namespace std;
// STL---
template <class T>
struct NodeS        // singly 
{
    T data;
    struct NodeS *next;
};

template <class T>
class SinglyLL
{
    public:
        struct NodeS<T> * head;
        int iCount;


};
int main()
{
    SinglyLL <int>obj1;
    
    return 0;
}
