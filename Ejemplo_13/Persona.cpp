#include "Persona.hpp"
#include <iostream>

// Constructor using initialization list

Persona::Persona(){}

Persona::Persona(int edad) : edad(edad) {}

// Destructor (empty, as no cleanup is required)
Persona::~Persona()
{
    // No resources to release
}

void Persona::mostrar(){
	std::cout << this->edad << std::endl;
}
