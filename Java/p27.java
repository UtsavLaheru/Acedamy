import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
public class p27 {
    public static void main(String[] args)throws IOException {
        FileOutputStream f1=new FileOutputStream("hello.txt");
        String a="Utsav";
        char ch[]=a.toCharArray();
        for(int i=0;i<a.length();i++){
            f1.write(ch[i]);
        }
        f1.close();

        FileInputStream f2=new FileInputStream("hello.txt");
        int i;
        do{
            i=f2.read();
            if(i!=-1){
                System.out.println((char)i);
            }
        }
        while(i!=-1);
        f2.close();
    }
}
