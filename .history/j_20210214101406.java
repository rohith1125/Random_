public class j{
    public static void main(String[] args)
    {
        String s = "java";
        char[] schar = s.toCharArray();
        char temp = schar[0];
        schar[0] = schar[schar.length - 1];
        schar[schar.length-1]=temp;
        System.out.println(schar);
        
    }
}