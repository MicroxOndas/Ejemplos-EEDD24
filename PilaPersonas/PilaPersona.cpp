#include "PilaPersona.hpp"

PilaPersona::PilaPersona()
{
	ultimo = NULL;
	longitud = 0;
}
void PilaPersona::insertar(Persona v)
{
	pnodoPilaPersona nuevo;
	nuevo = new NodoPilaPersona(v, ultimo);
	ultimo = nuevo;
	longitud++;
}
Persona PilaPersona::extraer()
{
	pnodoPilaPersona nodo;
	Persona v;
	if(!ultimo)
		return 0;
	nodo = ultimo;
	ultimo = nodo->siguiente;
	v = nodo->valor;
	longitud--;
	delete nodo;
	return v;
}

Persona PilaPersona::cima()
{
//	pnodoPila nodo;
	if(!ultimo)
		return 0;
	return ultimo->valor;
}

void PilaPersona::mostrar()
{
	pnodoPilaPersona aux = ultimo;
	cout << "\tEl contenido de la pila es: ";
	while(aux){
		aux->valor.mostrar();
		aux = aux->siguiente;
	}
	cout << endl;
}

int PilaPersona::getLongitud()
{
	return this->longitud;
}

PilaPersona::~PilaPersona()
{
	pnodoPilaPersona aux;
	while(ultimo) {
		aux = ultimo;
		ultimo = ultimo->siguiente;
		delete aux;
	}
}