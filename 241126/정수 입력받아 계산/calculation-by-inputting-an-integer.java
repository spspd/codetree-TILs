import java.io.*;
public class Main {
    public static void main(String[] args) throws IOException {

        // 정수입력
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String a = br.readLine();
        
        System.out.print(Integer.parseInt(a) *2 +3);
        // 여기에 코드를 작성해주세요.
    }
}