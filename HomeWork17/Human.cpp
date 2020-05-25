#include<iostream>
#include "Human.h"

void Human::Display()
{
	std::cout << "Current human: " << Human::name << " " << Human::age << " years old";
}