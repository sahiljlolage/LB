// unpacking 522
import java.util.*;
import java.io.*;   // Files 

class Unpacker
{
    public static void main(String[] args)  //throws Exception
    {

        Scanner sobj = new Scanner(System.in);
        byte Header[] = new byte[100];  // for read 100 byte
        int iRet = 0;
        String HeaderStr;
        String Tokens[];    // two parts of string 
        int iCount = 0;

        System.out.println("-----------Marvellous Packer Unpacker --------------");
        System.out.println("Unpacking Activity of the application is started...");

        System.out.println("Enter the file name which contains the packed data : ");
        String PackFile = sobj.nextLine();
        
        try 
        {

            File packobj = new File(PackFile);
    
            FileInputStream inobj = new FileInputStream(packobj);
            
            while((iRet = inobj.read(Header,0,100)) > 0 )
            {

                HeaderStr = new String(Header);
                
                System.out.println(HeaderStr);
    
                
                Tokens = HeaderStr.split(" ");
    
    
                File newFileobj = new File(Tokens[0]);
                newFileobj.createNewFile();
                
                FileOutputStream outobj = new FileOutputStream(newFileobj);
                int FileSize = Integer.parseInt(Tokens[1]);
    
                byte Buffer[] = new byte [FileSize];        // file size 20 byte array create of that size 
    
                inobj.read(Buffer,0,FileSize);
                outobj.write(Buffer,0,FileSize);

                System.out.println("File Successfully extracted with name"+Tokens[0]);
                iCount++;
            }
            System.out.println("-----------Packing summery -------------- ");
            System.out.println("Total number of files extracted : "+iCount);
            System.out.println("Thank you for using Marvellous Packer Unpacker..");           

        }
        catch(Exception obj)
        {
            System.out.println("Exception occured "+obj);
        }

    }  
}
