// Enunciado:
// Torres de Hanoi 
//
// Fecha de entrega:
// 16/1/23
//
// Participantes:
// 1- John Luis Del Rosario Sánchez - ID 1106940
// 2- Ashly Marisell Paula Ynoa - ID 1108023
// 3- Elián Matos Díaz - ID 1106901
// 4- Juan Daniel Ubiera Méndez - ID 1107248
// 5- Kelvin Arístides García Espinal - ID 1107646

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool ValidarDato(string str)
{
    int i = 0;
    while (str[i] != '\0') //'\0' es el character que marca el final del string
    {
        if (str[i] == '-')// pasa a la siguiente iteracion, ignorando el signo
        {
            i++;
            continue;
        }
        else if (isdigit(str[i]) == false)// compara cada caracter de la cadena para saber si es numerico
        {
            return false;
        }
        i++;
    }
    return true; //devuelve un str igual si no se encontraron letras
}

void ResolverEcuacion(double a, double b, double c) {
    double x1, x2;
    double disc = b * b - 4 * a * c;

    if (disc > 0) {
        x1 = (-b + sqrt(disc)) / (2 * a);
        x2 = (-b - sqrt(disc)) / (2 * a);
        system("CLS");
        cout << "Las soluciones son x1 = " << x1 << " y x2 = " << x2 << endl;
    }
    else if (disc == 0) {
        x1 = -b / (2 * a);
        system("CLS");
        cout << "La solucion unica es x = " << x1 << endl;
    }
    else {
        disc *= -1;
        cout << "Las soluciones imaginarias son x1 = (" << -b << "+" << sqrt(disc) << "i)/" << 2 * a << " y x2 = ("
            << -b << "-" << sqrt(disc) << ")i/" << 2*a << endl;
    }
}

int main() {
    string a, b, c;
    double A, B, C;
    do
    {
        cout << "Resolviendo ecuaciones de segundo grado de la forma ax^2 + bx + c = 0" << endl;
        cout << "Ingresa los valores de a, b y c: \n";
        cout << "Valor a: ";
        cin >> a;

        if (!ValidarDato(a)) {
            cout << "Tipo de dato incorrecto, solo se permiten numeros, intente de nuevo" << endl;
            system("PAUSE");
            system("CLS");

            continue;
        }

        cout << "Valor b: ";
        cin >> b;
        if (!ValidarDato(b)) {
            cout << "Tipo de dato incorrecto, solo se permiten numeros, intente de nuevo" << endl;
            system("PAUSE");
            system("CLS");

            continue;
        }
        
        cout << "Valor c: ";
        cin >> c;
        if (!ValidarDato(c)) {
            cout << "Tipo de dato incorrecto, solo se permiten numeros, intente de nuevo" << endl;
            system("PAUSE");
            system("CLS");

            continue;
        }

        A = stod(a);
        B = stod(b);
        C = stod(c);

        ResolverEcuacion(A, B, C);
        system("PAUSE");
        system("CLS");
        continue;

    } while (true);
}