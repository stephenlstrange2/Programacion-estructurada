#pragma once
#include <string>

class User{
protected:

	std::string Name;
	int ID;

public:

	User(std::string _Name, int _id){
		Name = _Name;
		ID = _id;
	}

	std::string GetName() { return Name; }
	int GetID() { return ID; }
};