import java.util.Scanner;
class shape{
    void area(float radius){
        System.out.println("Area of Circle:"+3.14*radius*radius);
    }
    void area(float length,float width){
        System.out.println("Area of Rectangle:"+length*width);
    }
}

public class p11 {
    public static void main(String[] args) {
        Scanner num=new Scanner(System.in);
        shape n=new shape();
        float c,r,r2;
        System.out.println("Enter Length:");    //Area of rectangle
        r=num.nextFloat();
        System.out.println("Enter Width:");
        r2=num.nextFloat();
        n.area(r, r2);
        System.out.println("Enter Radius");     //Area of Circle
        c=num.nextFloat();
        n.area(c);
    }
}
