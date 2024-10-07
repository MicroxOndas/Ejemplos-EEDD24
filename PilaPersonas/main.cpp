#include <stdio.h>
#include "Persona.hpp"
#include "PilaPersona.hpp"

int main(int argc, char **argv)
{
	Persona persona1 = Persona(25);
	
	Persona persona2 = Persona(30);
	
	PilaPersona p = PilaPersona();
	
	p.insertar(persona1);
	p.insertar(persona2);
	
	p.mostrar();
	
	p.extraer();
	
	p.mostrar();
	
	p.extraer();
	
	p.mostrar();
}
