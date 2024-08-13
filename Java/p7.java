class Rectangle{
    int height,weight;
    public Rectangle(int height,int weight){
        this.height=height;
        this.weight=weight;
    }
}
public class p7 {
    public static void main(String[] args){
        Rectangle r1=new Rectangle(15, 16);
        System.out.println("Height:"+r1.height);
        System.out.println("Weight:"+r1.weight);
    }
    
}
