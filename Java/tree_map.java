import java.util.TreeMap;

public class tree_map {
    public static void main(String[] args) {
        TreeMap<String,Integer> i=new TreeMap<>();
        i.put("Utsav", 17);
        i.put("Enrollment", 52);
        i.put("Hello I AM The Last Entry", 76);
        System.out.println("My Name is Utsav And I Am "+i.get("Utsav"));
        System.out.println("My Enrollment Number is "+i.get("Enrollment"));
        System.out.println("\n");
        System.out.println("Or I Can Write Like This Also");
        for ( String n : i.keySet()) {
            System.out.println(n+" is "+i.get(n));
        }
        System.out.println("\n");
        System.out.println("And Delete This Also");
        i.remove("Enrollment");
        System.out.println("My Enrollment Number is "+i.get("Enrollment Number"));  //it shows null after you delete a key
        System.out.println("\n");
        System.out.println("One Thing Is Different From HashMap is The Entries");
        System.out.println("First Entries:"+i.firstEntry());
        System.out.println("Last Entries:"+i.lastEntry());
    }
}
