#pragma once
#ifndef CAPITAO_H
#define CAPITAO_H
#include <iostream>
#include <string>
#include <vector>
#include "Unidade.h"
using namespace std;

class Capitao : public Unidade{

public:

	Capitao(string id, int posicaoSala);
	~Capitao();

	void setHp(int hp) { this->hp = hp; }
	int getHp() { return this->hp; }
	void setReparador(int reparador) { this->reparador = reparador; }
	int getReparador() { return this->reparador; }
	void setCombatente(int combatente) { this->combatente = combatente; }
	int getCombatente() { return this->combatente; }
	void setExoesqueleto(int exoesqueleto) { this->exoesqueleto = exoesqueleto; }
	int getExoesqueleto() { return this->exoesqueleto; }
	void setPosicaoSala(int posicaoSala) { this->posicaoSala = posicaoSala; }
	int getPosicaoSala() { return this->posicaoSala; }

	void setId(string id) { this->id = id; }
	string getId() { return this->id; }
	void setNome(string nome) { this->nome = nome; }
	string getNome() { return this->nome; }

	void setOperador(bool operador) { this->operador = operador; }
	bool getOperador() { return this->operador; }
	void setRespira(bool respira) { this->respira = respira; }
	bool getRespira() { return this->respira; }
	int reparaIntegridade(Sala *s);
};

#endif