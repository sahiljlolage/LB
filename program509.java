import java.util.*;
import java.io.*;   // Files 

class program509
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
            //System.out.println("Its a directory");
            File list[] = fobj.listFiles();         // gives u all file names of the directory 

            System.out.println("Number of files in that directory are : "+list.length);
        }
    }
    catch(Exception iobj)
    {
        System.out.println("Exception occured : "+iobj);
    }
}
}
