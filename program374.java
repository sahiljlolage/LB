import java.util.*;
// count no. of specific word  split()
class program374
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String : ");
        String str = sobj.nextLine();
        
        str = str.replaceAll("\\s+"," "); // + indicates more than one 

        str = str.trim();       // # it will help to trim start space and white space 
        
        String arr[] = str.split(" ");  
        int iFrequency = 0;

        // for(String s : arr)
        // {
        //     if(s.equals("india"))
        //     {
        //         iFrequency++;
        //     }
        // }

        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        {
            if(arr[iCnt].equals("india"))
            {
                iFrequency++;
            }
        }
        System.out.println("Frequency of india word is  : "+iFrequency);
        
        
        sobj.close(); 
    }
}   

// equals()---data compare 