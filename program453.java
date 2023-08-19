// singly Linear
import java.util.*;
class Node 
{
    public int data;
    public Node next;       // next reference

    public Node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
    public Node first;
    public int iCount = 0;

    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void Display()
    {
        System.out.println("Elements of Linked List are : ");

        Node temp = first;

        while(temp != null)
        {
            System.out.print("| "+temp.data+" |-> ");
            temp = temp.next;
        }
        System.out.println("NULL");
    }
    public int Count()
    {
        return this.iCount;
    }
    public void InsertFirst(int no)
    {
        Node newn = new Node(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }
        iCount++;
    }
    
    public void InsertLast(int no)
    {
        Node newn = new Node(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            Node temp = first;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        iCount++;
    }
    
    public void DeleteFirst()
    {
        // java garbage collector will free 
        if(first != null)
        {
            first = first.next;           
            iCount--;
        }
    }

    public void DeleteLast()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            Node temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        iCount--;
    }

        public void InsertAtPos(int no,int iPos)
    {}
    public void DeleteAtPos(int iPos)
    {}


}

class program453
{
    public static void main(String[] args) 
    {
        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        
        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);

        obj.Display();

        System.out.println("Number of elements are : "+obj.Count());

        obj.DeleteFirst();

        obj.DeleteLast();

        obj.Display();

        System.out.println("Number of elements are : "+obj.Count());


    }
}