#include "Capitao.h"
#include "Sala.h"

Capitao::Capitao(string id, int posicaoSala) : Unidade(6, 1, 2, true, 1, true, 0, "Capitao", id, posicaoSala){

}

Capitao::~Capitao(){}

int Capitao::reparaIntegridade(Sala *s){
	//verificar se a sala em que o RED esta é um dos propulsores
	if (s->getIntegridade() < 100){
		int newIntegridade = s->getIntegridade() + this->getReparador();
		if (newIntegridade>100){
			s->setIntegridade(100);
			return newIntegridade - 100;
		}
		else{
			s->setIntegridade(newIntegridade);
			return this->getReparador();
		}
	}
	else{
		return 0;
	}

}