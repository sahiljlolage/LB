// String 
import java.util.*;

class program352
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner( System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        System.out.println("Your name is : "+name);
        
        System.out.println("Length of string is : "+name.length());

        // string to char array
        char str[] = name.toCharArray();

        for(int iCnt = 0; iCnt < str.length; iCnt++)     // method
        {
            System.out.println(str[iCnt]);  // char by char print // iCnt-- index

        }
        sobj.close();
    }
}
