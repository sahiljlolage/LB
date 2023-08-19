// array -- approach 2
import java.util.*;

class ArrayX
{
    protected int Arr[];   //characteristics of class       // derived class-- accessible only
    
    public ArrayX(int iSize)    // constructor always public 
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner( System.in);

        System.out.println("Enter the elements : ");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elements of array are : ");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MyArray extends ArrayX
{
    public MyArray(int iSize)
    {
        super(iSize);       // derived to parent class......in c++ :- base member initialization -- 
    }
    public int Summation()
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}
class program348
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner( System.in);

        System.out.println("Enter number of elements : ");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);


        mobj.Accept();
        mobj.Display();
        // int iRet = aobj.Summation()
        // System.out.println("Summation of elements : "+iRet);
        System.out.println("Summation of elements : "+mobj.Summation());
        
        sobj.close();
    }
}
