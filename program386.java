import java.util.*;
// anagram --
class program386
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

        }
        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();
        
        char Arr[] = str1.toCharArray(); // string to char array
        char Brr[] = str2.toCharArray(); // string to char array

        Arrays.sort(Arr);
        Arrays.sort(Brr);

        if(Arrays.equals(Arr,Brr))  // arrays---- class 
        {
            System.out.println("Strings are anagram");
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