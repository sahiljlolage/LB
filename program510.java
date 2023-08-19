import java.util.*;
import java.io.*;   // Files 

class program510
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

            for(int i = 0; i < list.length; i++)
            {
                System.out.println("File name : "+list[i].getName()+" File Size : "+list[i].length());
            }
        }
    }
    catch(Exception iobj)
    {
        System.out.println("Exception occured : "+iobj);
    }
}
}
