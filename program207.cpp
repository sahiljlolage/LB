// accept 2 no,return largest number.

#include<iostream>
using namespace std;

class Number
{
    public:
        int iNo1;       // as a characterstics 
        int iNo2;

        void Accept()
        {
            cout<<"Enter first number : "<<"\n";
            cin>>iNo1;        

            cout<<"Enter second number : "<<"\n";
            cin>>iNo2;            
        }

        int Maximum()
        {
            if(iNo1 > iNo2)
            {
                return iNo1;
            }
            else
            {
                return iNo2;
            }
        }
};


int main()
{
    int iRet = 0;
    Number nobj;

    nobj.Accept();

    iRet = nobj.Maximum();

    cout<<"Maximum number is : "<<iRet;

    return 0;
}