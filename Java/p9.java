
import java.util.Scanner;
public class p9 {
    static int n=0;
    public static void main(String[] args) {
        System.out.println("Row of Numbers:");
        Scanner num=new Scanner(System.in);
        n=num.nextInt();
        for(int i=0;i<n;i++){
            System.out.println("Enter Number:");
            i=num.nextInt();
        }
    }
}
