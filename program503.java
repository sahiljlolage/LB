import java.util.*;
import java.io.*;   // Files 

class program503
{
    public static void main(String[] args)  throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the File Name that you want to create : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);     // File is inbuilt class 
        boolean bRet = fobj.createNewFile();        // need to handle exception

        if(bRet == true)
        {
            System.out.println("File successfully created");
        }
        else
        {
            System.out.println("Unable to create file");
        }

    }
}