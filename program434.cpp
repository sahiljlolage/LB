#include<iostream>
using namespace std;
// generic approach

template <class T>
class ArrayX
{
    public :
            T *Arr;
            int Size;

            ArrayX(int);
            void Accept();
            void Display();
            T Maximum();

};
           template <class T>
           ArrayX<T>::ArrayX(int length)
            {
                Size = length;
                Arr = new T[Size];
            }
            template <class T>
            void ArrayX<T>::Accept()
            {
                cout<<"Enter the elements of array\n";
                int iCnt = 0;
                for(iCnt = 0; iCnt < Size; iCnt++)
                {
                    cin>>Arr[iCnt];
                }
            }
            template <class T>
            void ArrayX<T>::Display()
            {
                cout<<"Elements of array are \n";
                int iCnt = 0;
                for(iCnt = 0; iCnt < Size; iCnt++)
                {
                    cout<<Arr[iCnt]<<"\n";
                }
            }
            template <class T>
            T ArrayX<T>::Maximum()
            {
                int iCnt = 0;
                T Max = Arr[0];

                for(iCnt = 0; iCnt < Size; iCnt++)
                {
                    if(Arr[iCnt] > Max)
                    {
                        Max = Arr[iCnt];
                    }
                }
                return Max;
            }

int main()
{

    ArrayX<int> obj1(5);

    obj1.Accept();
    obj1.Display();
    int iRet = 0;
    iRet = obj1.Maximum();
    cout<<"Maximum is : "<<iRet;

    ArrayX<double> obj2(5);

    obj2.Accept();
    obj2.Display();
    double dRet = 0;
    iRet = obj2.Maximum();
    cout<<"Maximum is : "<<dRet;

    
    return 0;
}
