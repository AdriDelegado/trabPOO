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

void Vida::setAdjacenteSala()
{
	if (this->posicao == 1)
	{
		adjacentes.push_back(2);
	}
	else if (this->posicao == 2)
	{
		adjacentes.push_back(1);
		adjacentes.push_back(3);
		adjacentes.push_back(5);
	}
	else if (this->posicao == 3)
	{
		adjacentes.push_back(2);
		adjacentes.push_back(4);
		adjacentes.push_back(6);
	}
	else if (this->posicao == 4)
	{
		adjacentes.push_back(3);
		adjacentes.push_back(7);
	}
	else if (this->posicao == 5)
	{
		adjacentes.push_back(2);
		adjacentes.push_back(6);
		adjacentes.push_back(10);

	}
	else if (this->posicao == 6)
	{
		adjacentes.push_back(3);
		adjacentes.push_back(5);
		adjacentes.push_back(7);
		adjacentes.push_back(11);
	}
	else if (this->posicao == 7)
	{
		adjacentes.push_back(4);
		adjacentes.push_back(6);
		adjacentes.push_back(8);
		adjacentes.push_back(12);
	}
	else if (this->posicao == 8)
	{
		adjacentes.push_back(7);
	}
	else if (this->posicao == 9)
	{
		adjacentes.push_back(10);
	}
	else if (this->posicao == 10)
	{
		adjacentes.push_back(5);
		adjacentes.push_back(9);
		adjacentes.push_back(11);
	}
	else if (this->posicao == 11)
	{
		adjacentes.push_back(6);
		adjacentes.push_back(10);
		adjacentes.push_back(12);
	}
	else if (this->posicao == 12)
	{
		adjacentes.push_back(7);
		adjacentes.push_back(11);
	}
}

vector<int> Vida::getAdjacenteSala()
{
	return this->adjacentes;
}