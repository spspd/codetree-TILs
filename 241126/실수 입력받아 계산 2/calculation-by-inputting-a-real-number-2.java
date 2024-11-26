import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String input_string = br.readLine();
        Float numb_Float = Float.parseFloat(input_string) +1.5f ;
        if(numb_Float %0.01f >= 0.005){
            numb_Float -= numb_Float %0.01f ;
            numb_Float +=0.01f;
        }
        System.out.print(numb_Float);  
    }
}