#include "Unidade.h"
#include "Sala.h"

//CONSTRUTOR PARA OS TRIPULANTES
Unidade::Unidade(int hp, int reparador, int combatente, bool operador, int exoesqueleto, bool respira, int localizacao, string nome, string id, int posicaoSala){
	this->hp = hp;
	this->nome = nome;

	this->posicaoSala = posicaoSala;
	this->id = id;
	this->reparador = reparador;
	this->combatente = combatente;
	this->operador = operador;
	this->exoesqueleto = exoesqueleto;
	this->respira = respira;

}
Unidade::Unidade(){}
Unidade::~Unidade(void){}



