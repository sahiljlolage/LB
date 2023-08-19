import java.util.*;
// string rev using inbuilt  word by word 
class program379
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
        
        for(String s : arr)
        {
            StringBuffer word = new StringBuffer(s);
            output.append(word.reverse().append(" "));

        }
        String result = new String(output);
        result = result.trim();                 // last space nee to trim
        
        System.out.println("Result is : "+result);

        sobj.close(); 
    }
}   

/* 
 * string buffer ---mutable 
 * string --  immutable 

 */