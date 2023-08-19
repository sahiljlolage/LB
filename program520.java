// unpacking
import java.util.*;
import java.io.*;   // Files 

class program520
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

            String Tokens[];    // two parts of string 
            Tokens = HeaderStr.split(" ");

            System.out.println("File name : "+Tokens[0]);
            System.out.println("File length : "+Tokens[1]);
            
            File newFileobj = new File(Tokens[0]);
            newFileobj.createNewFile();
            
            FileOutputStream outobj = new FileOutputStream(newFileobj);
            int FileSize = Integer.parseInt(Tokens[1]);

            byte Buffer[] = new byte [FileSize];        // file size 20 byte array create of that size 

            inobj.read(Buffer,0,FileSize);

            outobj.write(Buffer,0,FileSize);

        }
        catch(Exception obj)
        {
            System.out.println("Exception occured "+obj);
        }

    }  
}
