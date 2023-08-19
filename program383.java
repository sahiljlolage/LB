import java.util.*;
// anagram --
class program383
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter first String : ");
        String str1 = sobj.nextLine();
        
        System.out.println("Enter second String : ");
        String str2 = sobj.nextLine();

        // filter 
        if(str1.length() != str2.length())
        {
          System.out.println("Strings are not anagram");  
          return;
        }
        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();
        
        char Arr[] = str1.toCharArray(); // string to char array
        char Brr[] = str2.toCharArray(); // string to char array

        int Freq1[] = new int[26];
        int Freq2[] = new int[26];
        
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Freq1[Arr[iCnt] - 'a']++;        // d = 100 so 100 -97 = 3
        }
  
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Freq2[Brr[iCnt] - 'a']++;        // d = 100 so 100 -97 = 3
        }

        for(iCnt = 0; iCnt < Freq1.length; iCnt++)
        {
            if(Freq1[iCnt] != Freq2[iCnt])
            {  
                break;
            }
        }
        if(iCnt == Freq1.length)
        {
            System.out.println("Strins are anagram");
        }
        else
        {
            System.out.println("Strings are not anagram");
        }
        sobj.close(); 
    }
}

/*
 * str1 --army
 * str2-- mary
 * string are anagram
 */