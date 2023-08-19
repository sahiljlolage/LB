// unpacking
import java.util.*;
import java.io.*;   // Files 

class program517
{
    public static void main(String[] args)  //throws Exception
    {

        Scanner sobj = new Scanner(System.in);
        byte Header[] = new byte[100];  // for read 100 byte
        
        System.out.println("-----------Marvellous Packer Unpacker --------------");
        System.out.println("Unpacking Activity of the application is started...");

        System.out.println("Enter the file name which contains the packed data : ");
        String PackFile = sobj.nextLine();
        
        try 
        {

            File packobj = new File(PackFile);
    
            FileInputStream inobj = new FileInputStream(packobj);
    
            inobj.read(Header,0,100);
    
            String HeaderStr = new String(Header);
            
            System.out.println(HeaderStr);
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured "+obj);
        }

    }  
}
