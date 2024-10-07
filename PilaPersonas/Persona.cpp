#include "Persona.hpp"

// Constructor using initialization list

Persona::Persona(){}

Persona::Persona(int edad) : edad(edad) {}

// Destructor (empty, as no cleanup is required)
Persona::~Persona()
{
    // No resources to release
}

void Persona::mostrar(){
	std::cout << std::endl;
	std::cout << this->dni << std::endl;
	std::cout << this->edad << std::endl;
	std::cout << this->genero << std::endl;
	std::cout << std::endl;
}
