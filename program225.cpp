using namespace std;
#include<iostream>

void DisplayBinary(int iNo)
{
    int iDigit = 0;

    cout<<"Binary conversion if : "<<iNo<<" is : "<<"\n";
    while(iNo != 0)
    {
        iDigit = iNo % 2;
        cout<<iDigit;
        iNo = iNo / 2;

    }
    cout<<"\n";
}
int main()
{
    int iValue = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    DisplayBinary(iValue);

    return 0;

}