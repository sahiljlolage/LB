// array -- approach 2
import java.util.*;

class ArrayX
{
    public int Arr[];   //characteristics of class 
}
class program344
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner( System.in);

        System.out.println("Enter number of elements : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];     // memory allocate 

        System.out.println("Enter the elements : ");
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of array are : ");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        sobj.close();
    }
}
