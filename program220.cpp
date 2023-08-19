// problems on digits
#include<iostream>
using namespace std;    //cin cout objects

class Digit
{
        private :
            int iNo;   // characterstics 

        public:
         Digit(int X)
        {
            iNo = X;
        }

        int SumDigits()
        {
            int iDigit = 0;
            int iSum = 0;
            int iTemp = iNo;    // coz iNo sets to zero in the characteristics 

            while(iTemp != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iTemp = iTemp / 10;
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

    

    return 0;
}