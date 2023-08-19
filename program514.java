// write Header into combine file 
import java.util.*;
import java.io.*;   // Files 

class program514
{
    public static void main(String[] args)  //throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the name of folder : ");
        String FolderName = sobj.nextLine();

    File fobj = new File(FolderName);     
    String Header = null;

    System.out.println("Enter the name of packed file that you want to create : ");
    String PackFile = sobj.nextLine();

    try
    {
        File Packobj = new File(PackFile);
        boolean bRet = Packobj.createNewFile();
        if(bRet == false)
        {
            System.out.println("Unable to create packed file");
            return;
        }

        FileOutputStream outobj = new FileOutputStream(Packobj);

        bRet = fobj.isDirectory();
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
                    byte bHeader[] = Header.getBytes();         // string to byte convert

                    outobj.write(bHeader,0,bHeader.length);
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
