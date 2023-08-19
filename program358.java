// String toggle
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

    public String StrUpper(String str)
    {
        // step 1 : convert String to array
        char Arr[] = str.toCharArray();

        // step 2 : Perform operations on array
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32); // int to char 
            }
        }
        // step 3 : convert array to string 
        String ret = new String(Arr);

        return ret;
    }

    public String StrToggle(String str)
    {
        // step 1 : convert String to array
        char Arr[] = str.toCharArray();

        // step 2 : Perform operations on array
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32); // int to char 
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);                
            } 
        }
        // step 3 : convert array to string 
        String ret = new String(Arr);

        return ret;
    }
}
class program358
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner( System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        StringX obj = new StringX();

        String sRet = obj.Strlower(name);
        System.out.println("Converted lower String is : "+sRet);
        
        sRet = obj.StrUpper(name);
        System.out.println("Converted Upper String is : "+sRet);
 
        sRet = obj.StrToggle(name);
        System.out.println("Converted Toggle String is : "+sRet);
     
        sobj.close();
    }
}
