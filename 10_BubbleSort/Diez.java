import java.util.Scanner;

public class Diez {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Escribe n: ");
        int n = sc.nextInt();
        int A[] = new int[n];
        for (int i = 0; i < n; i++) A[i] = sc.nextInt();
        ordenarBurbuja(A);
        mostrarVectorOrdenado(A);
    }

    public static void ordenarBurbuja(int A[]) {
        for (int i = 0; i < A.length; i++)
            for (int j = 0; j < A.length - 1; j++)
                if(A[j] > A[j + 1]) {
                    int aux = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = aux;
                }
    }

    public static void mostrarVectorOrdenado(int A[]) {
        for (int i = 0; i < A.length; i++)
            System.out.print(A[i] + " ");
        System.out.println("");
    }
}
