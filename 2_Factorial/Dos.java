import java.util.Scanner;


public class Dos {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;

        System.out.print("Escribe n: ");
        n = sc.nextInt();
        System.out.println("\nEl factorial es: " + factorial(n));
    }

    public static int factorial(int n) {
        if(n <= 1) return 1;
        return n * factorial(n - 1);
    }
}
