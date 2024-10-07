#include "NodoPilaPersona.hpp"
#include "Persona.hpp"

NodoPilaPersona::NodoPilaPersona (Persona v, NodoPilaPersona* sig)
{
	valor = v;
	siguiente = sig;
}

NodoPilaPersona::~NodoPilaPersona()
{
}