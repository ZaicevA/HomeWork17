#pragma once
#include <string>
#include <iostream>
class Human
{
public:
	Human():name("Ivan"), age(0)
	{}
	Human(std::string _name, int _age):name(_name),age(_age)
	{}
	void Display();
private:
	std::string name;
	int age;
};

