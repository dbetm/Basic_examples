import java.util.Scanner;
import java.util.ArrayList;

public class Siete {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Número de elementos a generar (n >= 1): ");
        int n = sc.nextInt();
        ArrayList<Integer> a = generarElementos(n);
        mostrarSucesion(a, n);
    }

    public static ArrayList<Integer> generarElementos(int n) {
        ArrayList<Integer> a = new ArrayList<>();
        a.add(0);
        a.add(1);
        for (int i = 2; i < n; i++) a.add(a.get(i - 1) + a.get(i - 2));
        return a;
    }

    public static void mostrarSucesion(ArrayList<Integer> a, int n) {
        for (int i = 0; i < n; i++) System.out.print(a.get(i) + " ");
        System.out.println("");
    }
}
