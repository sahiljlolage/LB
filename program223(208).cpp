// accept 2 no,return largest number. constructor---encapsulation

#include<iostream>
using namespace std;

class Number
{
    private:            // by default private 
        int iNo1;       // as a characterstics 
        int iNo2;

        public : 
        Number(int X,int Y)
        {
            iNo1 = X;
            iNo2 = Y;

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
    int iValue1 = 0, iValue2 = 0;
  
  cout<<"Enter first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter second number : "<<"\n";
    cin>>iValue2;

    Number nobj(iValue1, iValue2);  // obj create

    iRet = nobj.Maximum();     // function call 

    cout<<"Maximum number is : "<<iRet;

    return 0;
}