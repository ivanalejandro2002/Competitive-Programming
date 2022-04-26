/* package whatever; // don't place package name! */

import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
public class Main{
	public static void main (String[] args)	{
		Scanner entrada =  new Scanner(System.in);
        int n = entrada.nextInt();
        String salida="";
        for(int i =0; i<n ;i++){
            salida += '*';
        }
        System.out.println(salida);
	}
}
