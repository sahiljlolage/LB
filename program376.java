import java.util.*;
// return word which having max letters in it 
class program376
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String : ");
        String str = sobj.nextLine();
        
        str = str.replaceAll("\\s+"," "); // + indicates more than one 

        str = str.trim();       // # it will help to trim start space and white space 
        
        String arr[] = str.split(" ");

        int iMax = 0;
        int iPos = 0;

        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        { 
            if(arr[iCnt].length() > iMax)
            {
                iMax = arr[iCnt].length();
                iPos = iCnt;
            }
        }
        
        System.out.println("Largest word is : "+arr[iPos]+" with length : "+iMax);

        sobj.close(); 
    }
}   