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
    // Insert into table student values(______,______,_____);

    public void InsertIntoTable(String name,int age,int marks)
    {
        Student sobj = new Student(name,age,marks);
        lobj.add(sobj);
    }
}
class program527
{
    public static void main(String[] args) 
    {

        DBMS obj = new DBMS();
        obj.StartDBMS();

        obj.InsertIntoTable("Rahul", 23, 89);
        obj.InsertIntoTable("Sagar", 26, 98);
        obj.InsertIntoTable("Pooja", 20, 56);
        obj.InsertIntoTable("Sayali", 30, 78);
        obj.InsertIntoTable("Tejas", 29, 68);

    }
}