#ifndef GERADORCONTA_H
#define GERADORCONTA_H
#include <string>
using namespace std;
template <typename T>
void GERADOR_DE_CONTA(T *lista) {
	lista->InserirPost(new ElementoListaPost(new Post("SO UM TEST", "@jonathan"))); 
	lista->InserirPost(new ElementoListaPost(new Post("A nada ve", "@carlos")));
	lista->InserirPost(new ElementoListaPost(new Post("BATATA", "@andre")));
	lista->InserirPost(new ElementoListaPost(new Post("na sua cara", "@pabllovitar")));
}

#endif
