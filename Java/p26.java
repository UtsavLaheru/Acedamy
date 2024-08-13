class t1 extends Thread{
   public void run(){
        for(int i=1;i<200;i++){
            if(i%2==0){
                System.out.println("Even:"+i);
            }
        }
    }
}
class t2 extends Thread{
    public void run(){
        for(int i=1;i<200;i++){
            if(i%2!=0){
                System.out.println("Odd:"+i);
            }
        }
    }
}
public class p26 {
    public static void main(String[] args) {
        t1 i=new t1();
        t2 i2=new t2();
        i.start();
        i2.start();
    }
}
