// String -- whitespace remove and return that string 
import java.util.*;

class StringX
{
    public String RemoveWhiteSpace(String str)
    {
        // String to char 
        char Arr[] = str.toCharArray();

        char Brr[] = new char[Arr.length];      // temp array Brr to allocate memory which is same as length of Arr.

        int i = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] != ' ')
            {
                Brr[i] = Arr[iCnt];
                i++;
            }
        }
        return new String(Brr);
    }
}
class program360
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner( System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        StringX obj = new StringX();
        String sRet = obj.RemoveWhiteSpace(name);

        System.out.println("Result is : "+sRet);
        sobj.close();
    }
}
