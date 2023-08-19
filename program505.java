import java.util.*;
import java.io.*;   // Files 

class program505
{
    public static void main(String[] args)  //throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the File Name that you want to create : ");
        String FileName = sobj.nextLine();

    try
    {

        File fobj = new File(FileName);     // File is inbuilt class 
        boolean bRet = fobj.exists();      // checks file is exist or not   

        if(bRet == true)
        {
            System.out.println("File is existing");
        }
        else
        {
            System.out.println("There is no file");
        }

    }
    catch(Exception iobj)
    {
        System.out.println("Exception occured : "+iobj);
    }
    }
}
