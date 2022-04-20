#pragma once
#include "User.h"

class Employee : public User{
private:
	std::string gender;

public:

	//Un constructor es un m�todo sin tipo que ayuda a inicializar al objeto
	//usando sus variables espec�ficas.
	Employee(std::string _name, int _ID, std::string _gender);

	std::string GetGender();
	float getSalary();

protected:

	float salary;
};