class car{
    int topSpeed;
    String name;
    public car(String name,int topSpeed){
        this.topSpeed=topSpeed;
        this.name=name;
    }
    public String toString(){
        return"name:"+name+" topSpeed:"+topSpeed;
    }
}
public class p18 {
    public static void main(String[] args) {
        car i1=new car("Swift",200);
        car i2=new car("BMW", 300);
        car i3=new car("toyota", 270);
        car i4=new car("audi", 280);
        car i5=new car("maruti", 200);
        System.out.println(i1);
        System.out.println(i2);
        System.out.println(i3);
        System.out.println(i4);
        System.out.println(i5);
    }
}
