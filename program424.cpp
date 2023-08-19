#include<iostream>
using namespace std;
// call by address
template <class T>

T Swap(T *No1,T *No2)
{
    T Temp;
    Temp = *No1;
    *No1 = *No2;
    *No2 = Temp;
}

// void Swap(double &No1,double &No2)
// {
//     double Temp;
//     Temp = No1;
//     No1 = No2;
//     No2 = Temp;
// }

int main()
{

    int A = 10,B = 11;
    Swap(&A,&B);

    cout<<"Data after Swapping  : "<<"\n";
    cout<<"Value of A : "<<A<<"\n";
    cout<<"Value of B : "<<B<<"\n";

    // double X = 10.89,Y = 11.67;
    // Swap(X,Y);

    // cout<<"Data after Swapping  : "<<"\n";
    // cout<<"Value of X : "<<X<<"\n";
    // cout<<"Value of Y : "<<Y<<"\n";
    

    return 0;
}

    // not possible convert to generic -- problems on digits,problems on string,
    // problems on numbers --- somewhat yes or not possible e.g.prime,perfect factors not possible coz input is specific 
    // bit wise -- not possible 
    // pattern printing -- display function able to generic 
    //problems on n numbers--- somewhat