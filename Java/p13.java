public class p13 {
    public static void main(String[] args) {
        String a="Hello Java";
        String a2="Newly Added";
        System.out.println("CharAt:"+a.charAt(4));
        System.out.println("Contains:"+a.contains("v"));
        System.out.println("Formated:"+String.format("%s with Hello Java",a2));
        System.out.println("Length:"+a.length());
        // System.out.println(a.replace("a", "o"));
        String[] arr=a.split(" ");
        for(int i=0;i<arr.length;i++){
            System.out.println("Split:"+arr[i]);
        }
    }
}
