import java.util.*;
// count no. of words  split()
class program372
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String : ");
        String str = sobj.nextLine();
        
        str = str.replaceAll("\\s+"," "); // + indicates more than one 

        str = str.trim();       // # it will help to trim start space and white space 
        
        String arr[] = str.split(" ");  
        System.out.println("Number of words are : "+arr.length);
        
        
        sobj.close(); 
    }
}   