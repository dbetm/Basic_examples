#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

class User {
private:
    string nombre;
    string apellido;
    int edad;
    bool isAdmin;
public:
    User();
    User(string, string, int, bool);
    string getNombre();
    string getApellido();
    int getEdad();
    bool isAdministrador();
    void setNombre(string nombre);
    void setApellido(string apellido);
    void setEdad(int edad);
    void setIsAdmin(bool isAdmin);
    string toString();
    virtual ~User();
};

User::User() {
    this->nombre = "desconocido";
    this->apellido = "desconocido";
    this->edad = -1;
    this->isAdmin = false;
}

User::User(string nombre, string apellido, int edad, bool isAdmin) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->edad = edad;
    this->isAdmin = isAdmin;
}

string User::getNombre() {
    return this->nombre;
}

string User::getApellido() {
    return this->apellido;
}

int User::getEdad() {
    return this->edad;
}

bool User::isAdministrador() {
    return this->isAdmin;
}

void User::setNombre(string nombre) {
    this->nombre = nombre;
}

void User::setApellido(string apellido) {
    this->apellido = apellido;
}

void User::setEdad(int edad) {
    this->edad = edad;
}

void User::setIsAdmin(bool isAdmin) {
    this->isAdmin = isAdmin;
}

string User::toString() {
    return
        this->nombre + " " + this->apellido + " " + to_string(this->edad) + " " + to_string(this->isAdmin);
}

User::~User() {
    this->nombre = "";
    this->apellido = "";
    this->edad = 0;
    this->isAdmin = false;
}

int main() {
    User u("David", "Betancourt", 20, true);
    u.setEdad(21);
    cout << u.toString() << endl;

    return 0;
}
