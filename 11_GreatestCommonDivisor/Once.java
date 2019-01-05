import java.util.Scanner;

public class Once {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;
        System.out.print("Escribe a y b:");
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println("El máximo comun divisor es: " + gcd(a, b));
    }

    public static int gcd(int a, int b) {
        return (b != 0 ? gcd(b, a % b) : a);
    }
}
