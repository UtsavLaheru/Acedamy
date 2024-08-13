public class p23 {
    public static void main(String[] args) {
        int a=12,b=0;
        try{
            System.out.println("Divide:"+a/b);
        }
        catch(ArithmeticException e){
            System.out.println("0 is not Divisable");
        }
        finally{
            System.out.println("End Of Code");
        }
    }
    
}
