import java.util.Scanner;

public class Seis {
    public static void main(String args[]) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Escribe el número de elementos: ");
        n = sc.nextInt();
        int a[] = new int[n];
        leerElementos(a);
        System.out.println("El promedio es: " + calcularPromedio(a));
    }

    public static void leerElementos(int a[]) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < a.length; i++) a[i] = sc.nextInt();
    }

    public static float calcularPromedio(int a[]) {
        float prom = 0;
        for (int i = 0; i < a.length; i++) prom += (float)a[i];
        return prom / (float)a.length;
    }
}
