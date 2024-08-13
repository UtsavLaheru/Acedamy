import java.util.Scanner;
abstract class shape{
    abstract void area();
}
class Triangle extends shape{
    float base,height;
    void area(){
      System.out.println("Area of Traingle:"+height*base/2);  
    }
}
class Rectangle extends shape{
    int l,h;
    void area(){
        System.out.println("Area Of Rectangle:"+l*h);
    }
}
class Circle extends shape{
    float r;
    void area(){
        System.out.println("Area Of Circle:"+3.14*r*r);
    }
}
public class p20 {
    public static void main(String[] args) {
        Triangle t=new Triangle();
        Circle c=new Circle();
        Rectangle v=new Rectangle();
        Scanner num=new Scanner(System.in);
        float b1,h1;
        System.out.println("For Triangle");
        System.out.println("Enter base:");
        b1=num.nextFloat();
        t.base=b1;
        System.out.println("Enter Height:");
        h1=num.nextFloat();
        t.height=h1;
        t.area();
        int l1,h2;
        System.out.println("For Rectangle");
        System.out.println("Enter length:");
        l1=num.nextInt();
        System.out.println("Enter Height:");
        h2=num.nextInt();
        v.l=l1;
        v.h=h2;
        v.area();
        float r1;
        System.out.println("For Circle");
        System.out.println("Enter radius:");
        r1=num.nextFloat();
        c.r=r1;
        c.area();
    }
}
