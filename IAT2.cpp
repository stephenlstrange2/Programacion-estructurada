#include <iostream>
#include <string>
#include "Employee.h"

//Variables
//int: números enteros (sin punto decimal).
//float: númerros con punto decimal.
//bool: falso o verdadero.
//char: entero ascii que representa una caracter.
//string: caracter o cadena de caracteres (concatenación de chars).

//Métodos
//void: no regresa regresa un resultado al terminar la operación.

int main()
{

    std::string name;
    std::string gender;
    int id;

    std::cin >> name;
    std::cin >> gender;
    std::cin >> id;
    Employee employee = Employee(name, id,gender);

    std::cout << employee.GetName() << " " << employee.GetID();

    

    return 0;
}
