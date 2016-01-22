#include "Capitao.h"
#include "Sala.h"

Capitao::Capitao(string id, Sala *s) : Unidade(6, 1, 2, true, 1, true, 0, "Capitao", id, s ){

}

Capitao::~Capitao(){}

int Capitao::reparaIntegridade(){
	//verificar se a sala em que o RED esta é um dos propulsores

	if (s->getId() == 0) //ver se e propulsor
		return 0;

	else if (s->getIntegridade() < 100){
		int newIntegridade = s->getIntegridade() + this->getReparador();
		if (newIntegridade>100){
			newIntegridade = 100 - s->getIntegridade();
			s->setIntegridade(100);
			return newIntegridade;
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