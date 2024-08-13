class t1 extends Thread{
    public void run(){
        try
        {
            sleep(1000);
        }
        catch(InterruptedException e){}
        System.out.println("Thread1");
    }
}
class t2 extends Thread{
    public void run(){
        try
        {
            sleep(2000);
        }
        catch(InterruptedException e){}
        System.out.println("Thread2");
    }
}
public class p25 {
    public static void main(String[] args) {
        t1 i=new t1();
        t2 i2=new t2();
        i.start();
        i2.start();
    }
   
}
