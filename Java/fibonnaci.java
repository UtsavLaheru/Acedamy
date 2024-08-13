public class fibonnaci {
    public static void main(String[] args) {
        int n1=0,n2=1,n3=0;
        for(int i=0;i<6;i++)
        {
            System.out.println(n1);
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
    }
    
}
