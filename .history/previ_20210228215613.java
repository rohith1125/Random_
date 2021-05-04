import java.util.*;
class Employee
{
    int id;
    float salary;
    String name,dept;
    Employee(int id,float salary,String name,String dept)
    {
        this.id=id;
        this.salary=salary;
        this.name=name;
        this.dept=dept;
    }
    void display()
    {
        System.out.println(id+" "+name+" "+salary+" "+dept);
    }
}
class Manager extends Employee
{
    ArrayList<Employee> list=new ArrayList<Employee>(5);
    Manager(int id,float salary,String name,String dept,ArrayList<Employee>list)
    {
        super(id, salary, name, dept);
        this.list=list;
    }
    void display()
    {
        System.out.println("MANAGER DETAILS");
        super.display();
        System.out.println("SUB ORDINATE DETAILS");
        for(int i=0;i<5;i++)
        {
            list.get(i).display();
        }
    }
}
class vaibhav
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int id=sc.nextInt();
        float salary=sc.nextFloat();   
        String name=sc.next(),dept=sc.next();
        ArrayList<Employee> list=new ArrayList<Employee>(5);
        for(int i=0;i<5;i++)
        {
            int id1=sc.nextInt();
            float salary1=sc.nextFloat(); 
            String name1=sc.next(),dept1=sc.next();
            Employee emp=new Employee(id1, salary1, name1, dept1);
            list.add(emp);
        }
        Manager m=new Manager(id, salary, name, dept, list);
        m.display();
    }
}