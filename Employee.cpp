#include "Employee.h"

Employee::Employee(std::string _name, int _ID, std::string _gender)
    : User(_name,_ID){
        gender = _gender;


}

std::string Employee::GetGender(){

    return gender;
}

float Employee::GetSalary(){

    return salary;

}

//sintaxis de una funcion en cpp
/*
1. tipo de funcion
2. clase a la que pertenece + ::
3. nombre de la funcion y sus argumentos
*/