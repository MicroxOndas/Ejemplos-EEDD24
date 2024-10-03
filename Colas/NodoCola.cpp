#include "NodoCola.hpp"

NodoCola:: NodoCola (int v, NodoCola* sig)
{
	valor = v;
	siguiente = sig;
}
NodoCola::~NodoCola()
{
}