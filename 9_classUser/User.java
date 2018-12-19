import java.util.Scanner;

public class User {
    // Atributos
    private String nombre;
    private String apellido;
    private int edad;
    private boolean isAdmin;

    public User() {
        this.nombre = "desconocido";
        this.apellido = "desconocido";
        this.edad = -1;
        this.isAdmin = false;
    }

    public User(String nombre, String apellido, int edad, boolean isAdmin) {
        this.nombre = nombre;
        this.apellido = apellido;
        this.edad = edad;
        this.isAdmin = isAdmin;
    }

    public String getNombre() {
        return this.nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getApellido() {
        return this.apellido;
    }

    public void setApellido(String apellido) {
        this.apellido = apellido;
    }

    public int getEdad() {
        return this.edad;
    }

    public void setEdad(int edad) {
        this.edad = edad;
    }

    public boolean isAdmin() {
        return this.isAdmin;
    }

    public void setIsAdmin(boolean isAdmin) {
        this.isAdmin = isAdmin;
    }

    public String toString() {
        return
            this.nombre +  " " + this.apellido + " " + this.edad + " " + this.isAdmin;
    }

    public static void main(String args[]) {
        User u = new User("Eve", "Adams", 15, true);
        Scanner sc = new Scanner(System.in);
        System.out.print("Escribe el nuevo nombre: ");
        String nombre = sc.next();
        System.out.print("Escribe la edad: ");
        int edad = sc.nextInt();
        u.setEdad(edad);
        u.setApellido(nombre);
        System.out.println(u.toString());
    }
}
