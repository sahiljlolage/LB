import java.util.*;
// count no. of words 
class program371
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String : ");
        String str = sobj.nextLine();
        //System.out.println(str.length());
        
        if(str.length() == 0)           // if nothing entered 
        {
            System.out.println("Number of words are  : 0");            
            return;
        }
        
        str = str.replaceAll("\\s+"," "); // + indicates more than one 

        str = str.trim();       // # it will help to trim start space and white space 
        
        int iFrequency = 0;
        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {
            if(str.charAt(iCnt) == ' ')
            {
                iFrequency++;
            }
        }
        System.out.println("Number of words are  : "+(iFrequency + 1));
        
        sobj.close(); 
    }
}