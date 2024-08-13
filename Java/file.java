import java.io.*;
public class file {
    public static void main(String[] args) throws IOException {
        FileInputStream i=new FileInputStream("File.txt");
        int data;
        while((data=i.read())!=-1){
            System.out.println((char)data);
        }
        i.close();
    }
}
