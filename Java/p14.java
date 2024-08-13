class c{
    public void a1(){
        System.out.println("Hello");
    }
}
class d extends c{
    public void b1(){
        System.out.println("World");
    }
}

public class p14 {
    public static void main(String[] args) {
        d h=new d();
        h.a1();
        h.b1();
    }
}