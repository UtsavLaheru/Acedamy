public class p12 {
    public p12(){
        int a=10;
        System.out.println("No Argument");
        System.out.println(a);
    }
    public p12(int a){
        System.out.println("with Argument");
        System.out.println(a);
    }
    public static void main(String[] args) {
        p12 n=new p12();
        p12 n2=new p12(15); 
    }
}
