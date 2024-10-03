#include <stdio.h>
#include "Persona.hpp"

int main(int argc, char **argv)
{
    // Creating an array of 10 Persona objects
    Persona personas[10];
    // Initialize eacsh Persona object with values from 18 to 27
    for(int t = 18; t < 28; t++) {
        personas[t - 18] = Persona(t);
    }
	for(int t = 0; t < sizeof(personas) / sizeof(personas[0]);t++){
		personas[t].mostrar();
	}
    
    // When the program ends, the destructors for the `personas` array
    // will be automatically called, so no need to manually call destructors.
    
    return 0;
}
