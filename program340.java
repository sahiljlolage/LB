// generic root addition of digits should be less than 10
import java.util.*;

class Digits
{
    int iCnt = 0;
    public int GenericRoot(int iNo)     // iNo = 156789
    {
        int iSum = 0;
        int iDigit = 0;
    
        while(iNo >= 10)
        {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
            }
            if(iSum >= 10)
            {
                iNo = iSum;
                iSum = 0;
            }
            else
            {
                iNo = iSum;
                break;       
            }
        }
        return iNo;
    }

}
class program340
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.GenericRoot(iNo);

        System.out.println("Generic Root is  : "+iRet);
       
        sobj.close();       // closed the ====warning 
        
    }
}

/*
 *  iNo = 985698
 * iSum  = 9+8+5+6+9+8
 * iSum = 45
 * 
 * iNo = 45
 * iSum = 4+5
 * 
 * iSum = 9
 */