// sum of digits 
import java.util.*;

class Digits
{
    int iCnt = 0;
    public int SumDigits(int iValue)
    {
        // int iDigit = 0;
        int iSum = 0;

        if(iValue < 0)      // updater 
        {
            iValue = -iValue;
        }

        while(iValue != 0)
        {
            // iDigit = iValue % 10;
            iSum = iSum + (iValue % 10);
            iValue = iValue / 10;
        }
        return iSum;
    }

}
class program339
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.SumDigits(iNo);

        System.out.println("Sum of digits is  : "+iRet);
       
        sobj.close();       // closed the ====warning 
        
    }
}

