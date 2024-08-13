class boss{
    int Base=10;
}
class employee extends boss{
    int Salary=1500;
}
class employee2 extends boss{
    int Salary=2000;
}

public class p16 {
    public static void main(String[] args) {
        employee n1=new employee();
        employee2 n2=new employee2();
        System.out.println("Salary of Employee 1:"+n1.Salary*n1.Base);
        System.out.println("Salary of Employee 2:"+n2.Salary*n2.Base);
    }
}
