class NotSufficient extends Exception{
    public NotSufficient(String m){
        super(m);
    }
}

class withdraw{
    int w1=20000;
    int w2=4000;
    int w3=2000;
}

public class p24 {
   public static void main(String[] args) throws NotSufficient {
       int amount=25000;
       withdraw i=new withdraw();
       int w1=i.w1;
       int w2=i.w2;
       int w3=i.w3;
       System.out.println("Amount:"+amount);
       amount=amount-w1;
       System.out.println("Balance:"+amount);
       amount=amount-w2;
       System.out.println("Balance:"+amount);
       amount=amount-w3;
       if(amount<0)
       {
           throw new NotSufficient("Not Sufficient Funds");
       }
       System.out.println("Balance:"+amount);
   } 
}
