#include <stdio.h>
#include "Persona.hpp"

int main(int argc, char **argv)
{

    Persona personas[10];

    for(int t = 18; t < 28; t++) {
        personas[t - 18] = Persona(t);
    }
	for(int t = 0; t < sizeof(personas) / sizeof(personas[0]);t++){
		personas[t].mostrar();
	}

    
    return 0;
}
