interface n1{
    void num(int enroll_no);
}
interface n2{
    void name(String student_name);
}
class info implements n1,n2{
   public void num(int enroll_no){
    System.out.println("Enrollment_no:"+enroll_no);
   }
   public void name(String student_name){
    System.out.println("Name:"+student_name);
   }
}
public class p19 {
    public static void main(String[] args) {
        info n=new info();
        n.name("Laheru Utsav");
        n.num(52);
    }
}
