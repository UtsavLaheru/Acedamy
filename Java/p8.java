class test{
    int a,b;
    void set(int a,int b){                   //created a function syntax:-void function_name()
        this.a=a;
        this.b=b;
    }
}

public class p8 {
    public static void main(String[] args) {
        test s=new test();
        s.set(15, 20);
        System.out.println(s.a);
        System.out.println(s.b);
    }
}
