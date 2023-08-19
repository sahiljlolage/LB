// nth bits are on or off  accept no and position

using namespace std;
#include<iostream>

typedef unsigned UINT;              // unsigned use 32 all bits 
bool CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;      //change
    UINT iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid position"<<"\n";
        return false;
    }

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false; 
    }
}
int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the bit position (Range should be 1 to 32)"<<"\n";
    cin>>iBit;

    bRet = CheckBit(iValue,iBit);
    if(bRet == true)
    {
        cout<<"bit is ON"<<"\n";
    }
    else
    {
        cout<<"bit is OFF"<<"\n";
    }

    return 0;

}


/*
0000    0000    0000    0000    0000    0000    0000    0000

iPos = 7
iMask = 0X00000001

iMask = 0000    0000    0000    0000    0000    0000    0000    0001

iMask = iMask << iPos -1 
iMask = iMask << (7 - 1)
iMask = iMask << 6

iMask = 0000    0000    0000    0000    0000    0000    0 1 0 0      0 0 0 0
*/  