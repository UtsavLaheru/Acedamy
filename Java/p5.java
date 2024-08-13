import java.util.Scanner;
public class p5 {
    public static void main(String[] args) {
        System.out.println("Enter Number:");
        Scanner num=new Scanner(System.in);
        int n=num.nextInt();
        int k=0;
        int flag=0;
        for(int i=2;k<n;i++){
            flag=0;
           for (int j=2;j<i;j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
           }
           if(flag==0){
            System.out.println(i);
            k++;
           }
            
        }
    }
}
