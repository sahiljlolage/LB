import java.util.*;
// count no. of specific word  split()
class program375
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String : ");
        String str = sobj.nextLine();
        
        str = str.replaceAll("\\s+"," "); // + indicates more than one 

        str = str.trim();       // # it will help to trim start space and white space 
        
        String arr[] = str.split(" ");  
        System.out.println("Enter the word that you want to search : ");
        String Word = sobj.nextLine();

        int iFrequency = 0;

        for(String s : arr)
        {
            if(s.equals(Word))
            {
                iFrequency++;
            }
        }

        // for(int iCnt = 0; iCnt < arr.length; iCnt++)
        // {
        //     if(arr[iCnt].equals(Word)
        //     {
        //         iFrequency++;
        //     }
        // }
        System.out.println("Frequency of india word is  : "+iFrequency);
        
        
        sobj.close(); 
    }
}   

// equals()---data compare 