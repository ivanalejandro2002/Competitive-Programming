import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        String salida = "";
        for(int i = 0; i < n ;i++){
            salida = "";
            for(int a = 0; a < m ;a++){
                salida+="*";
            }
            System.out.println(salida);
        }
    }
}