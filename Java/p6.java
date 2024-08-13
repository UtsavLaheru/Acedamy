class student{
    String name;
    int enroll_no;
}

public class p6 {
    public static void main(String[] arg){
        student s1=new student();
        student s2=new student();
        student s3=new student();
        s1.enroll_no=52;
        s2.enroll_no=37;
        s3.enroll_no=40;
        s1.name="Utsav";
        s2.name="Prince";
        s3.name="Yash";
        System.out.println(s1.name);
        System.out.println(s1.enroll_no);
        System.out.println(s2.name);
        System.out.println(s2.enroll_no);
        System.out.println(s3.name);
        System.out.println(s3.enroll_no);
    }
}
