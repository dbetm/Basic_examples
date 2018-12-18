import java.util.Scanner;

public class Ocho {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Escribe el número: ");
        String binario = sc.next();
        System.out.println("El número es: " + convertirADecimal(binario));
    }

    public static int convertirADecimal(String binario) {
        int numero = 0;
        int j = 0;
        for (int i = binario.length() - 1; i >= 0; i--, j++)
            if(binario.charAt(i) == '1') numero += Math.pow(2, j);
        return numero;
    }
}
