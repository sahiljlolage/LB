import java.util.*;
import java.io.*;   // Files 

class program508
{
    public static void main(String[] args)  //throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the name of folder : ");
        String FolderName = sobj.nextLine();

    File fobj = new File(FolderName);     

    try
    {
        boolean bRet = fobj.isDirectory();
        if(bRet == true)
        {
            System.out.println("Its a directory");
        }
        else
        {
            System.out.println("Not a directory");
        }
    }
    catch(Exception iobj)
    {
        System.out.println("Exception occured : "+iobj);
    }
}
}
