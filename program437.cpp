#include<iostream>
using namespace std;
// STL---
// structure for Singly linear and singly circular
template <class T>
struct NodeS        // singly 
{
    T data;
    struct NodeS *next;
};

template <class T>
struct NodeD        // singly 
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};

// class of singly linear list 
template <class T>
class SinglyLL
{
    public:
        struct NodeS<T> * first;
        int iCount;


};

template <class T>
class SinglyCL
{
    public:
        struct NodeS<T> * first;
        struct NodeS<T> * last;
        int iCount;


};
// doubly linear linked list 
template <class T>
class DoublyLL
{
    public:
        struct NodeD<T> * first;
        int iCount;


};
template <class T>
class DoublyCL
{
    public:
        struct NodeD<T> * first;
        struct NodeD<T> * last;
        int iCount;


};

// logic of 32 functions 
int main()
{

    
    return 0;
}
