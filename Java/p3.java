public class p3 {
    public static void main(String[] args) {
        int n= 505,rev=0,rem;
        while(n!=0){
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        if(n==n){
            System.out.println("it's a parandrome");
        }
        System.out.println("Reverse Digits:"+rev);
    }
}
