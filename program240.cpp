// nth bits are on or off  accept no and position

using namespace std;
#include<iostream>

typedef unsigned UINT;              // unsigned use 32 all bits 
bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00102040;      //change
    UINT iResult = 0;

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
    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"7th and 14th and 21st bits are ON"<<"\n";
    }
    else
    {
        cout<<"7th and 14th and 21st bits are OFF"<<"\n";
    }

    return 0;

}