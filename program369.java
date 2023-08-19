import java.util.*;
// multiple whitespaces remove 
class program369
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," "); // + indicates more than one 

        str = str.trim();       // # it will help to trim start space and white space 

        System.out.println("Updated string is : "+str);
        
        sobj.close(); 
    }
}