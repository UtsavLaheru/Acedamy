import java.lang.Math;
import java.util.Scanner;
class SetNumber{
    int max,min;
    void Range(){
        System.out.println("Thinking Of A Number Between:"+min+" To "+max);
    }
}
class trys{
    int t;
    void Lives(){
        System.out.println("You Have "+t+" Lives");
    }
}
public class micro {
    public static void main(String[] args) {
        Scanner i=new Scanner(System.in);
        SetNumber n=new SetNumber();
        trys l=new trys();
        int max,min=0;
        int t=0;
        System.out.println("Enter Minimum Range");
        min=i.nextInt();
        n.min=min;
        System.out.println("Enter Maximum Range");
        max=i.nextInt();
        n.max=max;
        n.Range();
        System.out.println("Enter Trys");
        t=i.nextInt();
        l.t=t;
        l.Lives();
        int Number=(int)(Math.random()*(max-min+1)+min);
        int user=0;
        int p;
        while(user!=Number){
            System.out.println("Guess The Number:");
            p=i.nextInt();
            user=p;
            if(user<=max && user>=min){
                if(Number<user){
                    System.out.println("Your Guess is Too High");
                    t--;
                    l.t=t;
                    l.Lives();
                }
                else if(Number>user){
                    System.out.println("Your Guess is Too Low");
                    t--;
                    l.t=t;
                    l.Lives();
                }
            if(t==0){
                break;
            }
            }
            else{
                System.out.println("Enter Vaild Number");
            }
        }
        if(user==Number){
            System.out.println("You Gussed Correct Number");
            System.out.println("!!You Win!!");
        }
        else if(t==0){
            System.out.println("I'll Guessed "+Number);
            System.out.println("You Lose");
        }
    }
}
