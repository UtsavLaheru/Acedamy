class j{
    void j1(){
        System.out.println("called from class a");     //this method is override
    }
}
class i extends j{
    void j1(){
        System.out.println("called from class b");
    }
}
public class p17 {
    public static void main(String[] args) {
        i cal=new i();
        cal.j1();
    }   
}
