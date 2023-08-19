// String convert to lower case 
import java.util.*;

class StringX
{
    // arr to string
    public String Strlower(String str)
    {
        // step 1 : convert String to array
        char Arr[] = str.toCharArray();

        // step 2 : Perform operations on array
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32); // int to char 
            }
        }

        // step 3 : convert array to string 
        String ret = new String(Arr);

        return ret;
    }
}
class program356
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner( System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        StringX obj = new StringX();

        String sRet = obj.Strlower(name);
        System.out.println("Converted String is : "+sRet);
     
        sobj.close();
    }
}
