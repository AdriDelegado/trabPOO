#include "Vida.h"

Vida::Vida(string nome, int posicao) : Sala(nome, posicao,5){}		// contrutor
Vida::~Vida(void){}			//destrutor

Vida::Vida(){}

void	Vida::setNivelEscudo(int nivelEscudo) { }
int		Vida::getNivelEscudo() { return 0; }
void	Vida::setNivelEscudoActual(int nivelEscudoActual) { }
int		Vida::getNivelEscudoActual() { return 0; }
bool Vida::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string Vida::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}