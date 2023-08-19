//
#include<iostream>
using namespace std;

class ArrayX
{
    public:
            int *Arr;
            int iSize;

            ArrayX(int);
            ~ArrayX();
            void Accept();
            void Display();
};
ArrayX:: ArrayX(int iNo)
{
    this->iSize = iNo;
    this->Arr = new int[iSize];
}

void ArrayX :: Accept()
{
    cout<<"Enter the elements : \n";
    for(int iCnt= 0 ; iCnt < iSize; iCnt++)
    {
        cin>> Arr[iCnt];
    }
}

void ArrayX :: Display()
{
    cout<<"elements are : \n";
    for(int iCnt= 0 ; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

ArrayX:: ~ArrayX()
{
    delete []Arr;
}

int main()
{
    int iValue = 0;

    cout<<"Enter the size of array : \n";
    cin>>iValue;

    ArrayX obj(iValue);

    obj.Accept();
    obj.Display();
    
    return 0;
}