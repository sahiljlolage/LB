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
    cout<<"Inside the constructor to allocate memory\n";
}

void ArrayX :: Accept()
{
    cout<<"Inside Accept method\n";
    cout<<"Enter the elements : \n";
    for(int iCnt= 0 ; iCnt < iSize; iCnt++)
    {
        cin>> Arr[iCnt];
    }
}

void ArrayX :: Display()
{
    cout<<"Inside Display method\n";
    
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
    cout<<"Inside the destructor to deallocate memory\n";
}

int main()
{
    int iValue = 0;
    cout<<"Inside main\n";
    cout<<"Enter the size of array : \n";
    cin>>iValue;

    ArrayX obj(iValue);

    obj.Accept();
    obj.Display();
    cout<<"End of main\n";
    return 0;
}