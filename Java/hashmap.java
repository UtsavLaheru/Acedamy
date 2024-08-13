import java.util.HashMap;
public class hashmap {
   public static void main(String[] args) {
    HashMap <String,Integer> i=new HashMap<>();
    i.put("Utsav", 17);
    i.put("Enrollment Number", 7052);
    System.out.println("My Name is Utsav And I Am "+i.get("Utsav"));
    System.out.println("My Enrollment Number is "+i.get("Enrollment Number"));
    System.out.println("\n");
    System.out.println("Or I Can Write Like This Also");
    for ( String n : i.keySet()) {
        System.out.println(n+" is "+i.get(n));
    }
    System.out.println("\n");
    System.out.println("And Delete This Also");
    i.remove("Enrollment Number");
    System.out.println("My Enrollment Number is "+i.get("Enrollment Number"));  //it shows null after you delete a key
   } 
}
