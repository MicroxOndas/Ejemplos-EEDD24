#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>

class Persona
{
private:
    bool genero = true;
    int edad;
    char dni[10] = "72210526B";  // Default DNI value
    
public:
    // Constructor and destructor
    Persona(int edad);
	Persona();
    ~Persona();
    
    // Getter and setter for 'edad'
    int getEdad();
    void setEdad(int nuevaEdad);
    
    // Method to check if the person is female (assuming genero = true means female)
    bool esMujer();
    
    // Method to display the Persona's information
    void mostrar();
    
    // Optionally, you can add a getter for 'dni' if needed
    const char* getDni();
};

#endif // PERSONA_HPP
