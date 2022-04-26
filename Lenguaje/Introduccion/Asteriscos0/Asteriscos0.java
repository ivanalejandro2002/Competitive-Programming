import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int n = entrada.nextInt();
        String linea = new String();
        for(int a = 0;a < n;a++){
            linea+='*';
        }
        for(int i = 0; i < n;i++){
            System.out.println(linea);
        }
    }
}
