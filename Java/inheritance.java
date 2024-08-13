
    class a{
        int n=10;
        int i=15;
    }
    class b extends a{    //single inheritance
        int c=n*i;
    }
public class inheritance {
    public static void main(String[] args) {
        b p2=new b();
        System.out.println(p2.i+"*"+p2.n+"="+p2.c);
    }
}
