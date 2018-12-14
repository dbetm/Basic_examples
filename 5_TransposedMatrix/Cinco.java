import java.util.Scanner;

public class Cinco {
    public static void main(String args[]) {
        int n;
        System.out.print("Escribe el orden de la matriz: ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int A[][] = new int[n][n];
        leerMatriz(A);
        System.out.println("\nMatriz transpuesta:\n");
        A = transponerMatriz(A);
        mostrarMatriz(A);
        sc.close();
    }

    public static void leerMatriz(int A[][]) {
        int num;
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < A.length; i++) {
            for (int j = 0; j < A.length; j++) {
                A[i][j] = sc.nextInt();
            }
        }
    }

    public static void mostrarMatriz(int A[][]) {
        for (int i = 0; i < A.length; i++) {
            for (int j = 0; j < A.length; j++) {
                System.out.print(A[i][j] + " ");
            }
            System.out.println("");
        }
    }

    public static int[][] transponerMatriz(int A[][]) {
        int B[][] = new int[A.length][A.length];
        for (int i = 0; i < A.length; i++) {
            for (int j = 0; j < A.length; j++) {
                B[i][j] = A[j][i];
            }
        }
        return B;
    }
}
