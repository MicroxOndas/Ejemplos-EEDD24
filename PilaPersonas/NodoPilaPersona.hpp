#include <iostream>
#include "Persona.hpp"
using namespace std;

class NodoPilaPersona
{
	public:
		NodoPilaPersona(Persona v, NodoPilaPersona* sig = NULL);
		~NodoPilaPersona();
		
	private:
		Persona valor;
		NodoPilaPersona* siguiente;
		friend class PilaPersona;
};
typedef NodoPilaPersona* pnodoPilaPersona;

