// problems on digits
#include<iostream>
using namespace std;    //cin cout objects

class Digit
{
        public :
            int iNo;

        Digit(int X)
        {
            iNo = X;
        }

};


int main()
{
    int iValue = 0;
    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
     
    return 0;
}