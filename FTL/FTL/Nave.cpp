#include "Nave.h"
#include "Sala.h"
#include "Unidade.h"

Nave::Nave(){

}
Nave::~Nave(void){}


vector <Unidade *> Nave::getOcupantes(){
	return this->ocupantes;
}
vector <Sala *> Nave::getSalas(){
	return this->salas;
}

void Nave::setOcupantes(Unidade *t){
	this->ocupantes.push_back(t);
}

string Nave::setSalas(Sala *s){
	if (s != NULL && verificaPosicao(s->getPosicao())==false){
		salas.push_back(s);
	}
	else{
		
		string num = to_string(s->getPosicao());
		
		delete(s);
		return "Posicao " + num + " escolhida ja esta ocupada";
	}
	return "Sala " + s->getNome() + " introduzida com Sucasso";
}


bool Nave::verifaIntegridade(){
	vector<Sala *>::iterator it;

	for (it = salas.begin(); it != salas.end(); it++){
		if ((*it)->getIntegridade() == 0){
			return true;
		}
	}
	return false;
}

bool Nave::verificaPosicao(int posicao){

	for (int i = 0; i != salas.size(); i++){
		
		if (salas.at(i)->getPosicao() == posicao){
			return true;
		}
	}
	return false;
}


int Nave::getNivelTotalPropulsao(){
	vector<Sala *>::iterator it;
	int propulsao=0;
	for (it = salas.begin(); it != salas.end(); it++){
		if ((*it)->getId() == 0){
			propulsao = propulsao + (*it)->getIntegridade();
		}
	}
	return propulsao;
}

bool Nave::verifacaOperadorPonte(){
	vector<Sala *>::iterator it;
	int propulsao = 0;
	for (it = salas.begin(); it != salas.end(); it++){
		if ((*it)->getId() == 3){
			if ((*it)->verificaId("C") == true||(*it)->verificaId("R") == true ){
				return true;
			}
		}
	}
	return false;
}
string Nave::criaSala(int v, int p,string nome){
	switch (v){

		case 1:
			Beliche *salaBeliche = new Beliche(nome, p);
			return setSalas(salaBeliche);;
			break;

		case 2:
			Propulsor *salaPropulsor = new Propulsor(nome, p);
			return setSalas(salaPropulsor);;
			break;

		case 3:
			break;
		case 4:

		break;

		default:
			return "SHIET";

	}
}
void Nave::reparaNave(){ // em principio vai ser do tipo stringo pra devolver a mensagem
	vector<Sala*>::iterator it;
	vector<Unidade*>::iterator it2;
	for (it = salas.begin(); it != salas.end(); it++){
		vector <Unidade*> u = (*it)->getUnidades();
		
		for (it2 = u.begin(); it2 != u.end(); it2++){
			string idAux = (*it2)->getId();
			vector<char> v(idAux.begin(), idAux.end());
			if (idAux=="C" || idAux=="V"){ // se na sala tiver alguem com ID C ou V repara
				cout << "Sala " << (*it)->getNome() << " foi reparada em " << (*it2)->reparaIntegridade((*it)) << " pontos";
			}
		}
		
	}
}
//string Nave::setUnidade(Unidade *u){
//	
//
//}