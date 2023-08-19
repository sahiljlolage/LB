// nth bits are on or off  accept no and position

using namespace std;
#include<iostream>

typedef unsigned UINT;              // unsigned use 32 all bits 
UINT offBit(UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iNo & iMask;      // to cck whther on or off

    if(iResult == iMask)
    {
        //cout<<"Bit is ON";

        return (iNo ^ iMask);
    }
    else        // bit is off
    {
        return iNo;
    }

}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    iRet = offBit(iValue);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;

}


/*
iPos = 7 
0000    0000    0000    0000    0000    0000    0000    0000


iNo ---------  0   1   1   1   0   1   0   0
               0   1   0   0   0   0   0   0   ^
____________________________________________________
                0   0   1   1   0   1   0   0     
*/