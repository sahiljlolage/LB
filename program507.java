import java.util.*;
import java.io.*;   // Files 

class program507
{
    public static void main(String[] args)  //throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the File Name that you want to create : ");
        String FileName = sobj.nextLine();

    try
    {

        File fobj = new File(FileName);     // File is inbuilt class 
        
        System.out.println("File length is : "+fobj.length());

    }
    catch(Exception iobj)
    {
        System.out.println("Exception occured : "+iobj);
    }
}
}
