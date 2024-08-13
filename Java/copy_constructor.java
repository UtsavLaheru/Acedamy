class con {
    int i;
    public con(){
        i=10;
        System.out.println("Copied Consturctor:"+i);
    }
    public con(con c){
        i=c.i;
        System.out.println("Copied Consturctor:"+i);
    }
}
public class copy_constructor{
    public static void main(String[] args) {
        con d=new con();
        con d2=new con(d);
    }
}

