// Header formation
import java.util.*;
import java.io.*;   // Files 

class program513
{
    public static void main(String[] args)  //throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the name of folder : ");
        String FolderName = sobj.nextLine();

    File fobj = new File(FolderName);     
    String Header = null;

    try
    {
        boolean bRet = fobj.isDirectory();
        if(bRet == true)
        {
            File list[] = fobj.listFiles();         // gives u all file names of the directory 

            for(int i = 0; i < list.length; i++)
            {
                if((list[i].getName()).endsWith(".txt"))
                {
                    Header = list[i].getName() +" "+ list[i].length();
                    for(int j = Header.length(); j< 100; j++)
                    {
                        Header = Header + " ";
                    }
                    System.out.println(Header);
                    System.out.println(Header.length());
                }
            }
        }
    }
    catch(Exception iobj)
    {
        System.out.println("Exception occured : "+iobj);
    }
}
}
