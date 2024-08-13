package p2;

public class source {
    //public can been displayed directly
    public void display()
    {
        int a=10,b=10;
        int c=a+b;
        System.out.println(a+"+"+b+"="+c);
    }
    //protect can be displayed indirectly
    protected void display2()
    {
        int a=10,b=10;
        int c=a-b;
        System.out.println(a+"-"+b+"="+c);
    }
    //private cannot be displayed in other than ther own code
    private void display3()
    {
        int a=5,b=2;
        int c=a*b;
        System.out.println(a+"*"+b+"="+c);
    }
    //same goes for default 
    void display4()
    {
        int a=12,b=36;
        int c=a/b;
        System.out.println(a+"/"+b+"="+c);
    }
    
         
}
