public class p10 {
    final int a=10,b=11;
    final void done(int c){                        //can't overload the function
        c=a+b;
        System.out.println("Sum:"+c);                  
    }
    public static void main(String[] args) {
        p10 n=new p10();
        n.done(15);
        System.out.println("num:"+n.a);
        System.out.println("num:"+n.b);
    }
}
