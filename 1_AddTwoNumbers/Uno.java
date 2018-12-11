import java.util.Scanner;

public class Uno {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int a, b;

        System.out.print("Escribe a: ");
        a = sc.nextInt();
        System.out.print("\nEscribe b: ");
        b = sc.nextInt();

        System.out.println("\n" + sumar(a, b));
    }

    public static int sumar(int a, int b) {
        return a + b;
    }
}
