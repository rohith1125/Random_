class Counter{
    int c1 = 0;
    static int c2;
    Counter(){
        c1++;
        c2++;
    }
    void disp()
    {
        System.out.println("first counter"+c1);
        System.out.println("second counter"+c2);
    }
}
public class prg3 {
    public static void main(String args[])
    {
        Counter a = new Counter();
        Counter b = new Counter();
        Counter c = new Counter();
        a.disp();
        b.disp();
        c.disp();
    }
}
