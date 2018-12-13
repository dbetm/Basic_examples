import java.util.Scanner;

public class Cuatro {
    public static void main(String args[]) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print(">> n: ");
        n = sc.nextInt();
        System.out.println(n + " tiene " + contarDigitos(n) + " dígito(s)");
    }

    public static int contarDigitos(int n) {
        int cont = 0;
        while(n != 0) {
            n /= 10;
            cont++;
        }
        return cont;
    }
}
