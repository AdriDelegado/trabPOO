#include "Red.h"
#include "Sala.h"
Red::Red(string id, int posicaoSala) : Unidade(5, 1, 1, true, 0, true, 0, "Camisa Vermelha", id, posicaoSala){

}

Red::~Red(){}

int Red::reparaIntegridade(Sala *s){
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