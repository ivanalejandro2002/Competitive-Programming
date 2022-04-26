import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t>0){
            t--;
            int n = in.nextInt();
            if(n>=1900)System.out.println("Division 1");
            else if(n>=1600)System.out.println("Division 2");
            else if(n>=1400)System.out.println("Division 3");
            else System.out.println("Division 4");
        }
    }
}