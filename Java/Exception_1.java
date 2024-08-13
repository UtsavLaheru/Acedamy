import java.util.Scanner;
class invaild_input extends Exception{
    public invaild_input(String m){
        super(m);
    }
}

public class Exception_1 {
    public static void main(String[] args) throws invaild_input {
        Scanner n=new Scanner(System.in);
        System.out.println("Enter Number:");
        int input=n.nextInt();
        if(input==0){
            throw new invaild_input("0 is Not Access Able");
        }    
    }  
}
