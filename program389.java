import java.util.*;
// nested loops--- multi dimensional array 
class Matrix
{
    public int Arr[][];

    public Matrix(int i, int j)
    {
        Arr = new int[i][j];    // multi dimensional array create 
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements : ");
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
        sobj.close();
    }

    public void Display()
    {
        System.out.println("Elements of matrix are : ");
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }       
    }

    int Summation()
    {
        int iSum = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }  
        return iSum;
    }
}

class program389
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of rows ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of coloumns ");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);   // Matrix mobj = new Matrix(3,4);

        mobj.Accept();
        mobj.Display();

        int iRet = mobj.Summation();
        System.out.println(iRet);
        sobj.close();
    }
}
