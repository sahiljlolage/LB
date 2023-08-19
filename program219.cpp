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

        int SumDigits()
        {
            int iDigit = 0;
            int iSum = 0;
            
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
            }
            return iSum;
        }

};


int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.SumDigits();

    cout<<"Summation of digits : "<<iRet<<"\n";
    
    iRet = dobj.SumDigits();

    cout<<"Summation of digits : "<<iRet<<"\n";  // gives 0

    return 0;
}