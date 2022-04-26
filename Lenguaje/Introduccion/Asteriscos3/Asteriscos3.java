package asteriscos3;
import java.util.Scanner;
public class Asteriscos3 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int i = 1; i <= n ;i++){
            String linea = "";
            for(int j = 0; j < n - i ; j++){
                linea += " ";
            }
            for(int j = 0; j < 2*i-1 ; j++){
                linea += "*";
            }
            System.out.println(linea);
        }
    }
}