import java.util.*;
// nested loops--- multi dimensional array 
class Matrix
{
    public int Arr[][];

    public Matrix(int i, int j)
    {
        Arr = new int[i][j];    // multi dimensional array create 

    }
}

class program387
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

        sobj.close();
    }
}
