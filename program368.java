import java.util.*;

class program368
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," "); // + indicates more than one 

        System.out.println("Updated string is : "+str);
        
        sobj.close(); 
    }
}