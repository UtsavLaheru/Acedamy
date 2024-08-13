class m{
    String a="Class 1";
}
class m2 extends m{
    String b="Class 2";
}
class m3 extends m2{
    String c="Class 3";
}
public class p15 {
    public static void main(String[] args) {
        m2 n=new m2();
        m3 n2=new m3();
        System.out.println(n.a);
        System.out.println(n2.b);
        System.out.println(n2.c);
        System.out.println("This is a Multi-level inhertions");
    }
}
