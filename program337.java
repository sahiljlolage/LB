// sum of digits 
import java.util.*;

class Digits
{
    int iCnt = 0;
    public int CountDigits(int iValue)
    {
        int iCnt = 0;
        // int iDigit = 0;
        
        while(iValue != 0)
        {
            // iDigit = iValue % 10;
            iCnt++;
            iValue = iValue / 10;
        }
        return iCnt;
    }

}
class program337
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.CountDigits(iNo);

        System.out.println("Count of digits are  : "+iRet);
       
        sobj.close();       // closed the ====warning 
        
    }
}

