import java.util.*;
// string
class program380
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," "); // + indicates more than one 

        str = str.trim();       // # it will help to trim start space and white space 
        
        String arr[] = str.split(" ");
       
        StringBuffer output = new StringBuffer();
    
        for(int iCnt = arr.length - 1; iCnt >= 0; iCnt--)
        {
            System.out.print(arr[iCnt]);
        }

        sobj.close(); 
    }
}   

/* 
 * string buffer ---mutable 
 * string --  immutable 

 */