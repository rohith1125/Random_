class a{
    void methadd()
    {
        System.out.print("10");
    }
}
class b extends a{
    void methadd(int a, int b){
        System.out.print(a+b);
    }
     public class hello2{
        private static void main(String args[]) 
        {
            b child = new b();
            a parent = new a();
            child.methadd();
            child.methadd(1,2);
            parent.methadd();
        }
    }
    
}