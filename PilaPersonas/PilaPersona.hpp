#include "NodoPilaPersona.hpp"

class PilaPersona
{
	public:
		PilaPersona();
		~PilaPersona();
		void insertar(Persona v);
		Persona extraer();
		Persona cima();
		void mostrar();
		int getLongitud();
	private:
		pnodoPilaPersona ultimo;
		int longitud;
};