import java.util.*;

class Student 
{
    public int Rno;
    public String Name;
    public int Age;
    public int Marks;

    public static int Generator;

    static  // for initialisation
    {
        Generator = 0;
    }

    public Student(String str,int X,int Y)
    {
        this.Rno = ++Generator;     // when u create 1st object gets 1
        this.Name = str;
        this.Age = X;
        this.Marks = Y;

    }

    public void Display()
    {
        System.out.println(this.Rno + " "+this.Name + " "+ this.Age + " "+this.Marks);
    }
}

class DBMS
{
    public LinkedList <Student> lobj ;      // reference of linked list class 
    
    public DBMS()
    {
        lobj = new LinkedList<Student>();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous DBMS started Successfully...");
        System.out.println("Table schema created successfully...");
        //Logic
    }
}
class program526
{
    public static void main(String[] args) 
    {

        DBMS obj = new DBMS();
        obj.StartDBMS();


    }
}