#pragma once
#ifndef UNIDADE_H
#define UNIDADE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Sala;
class Unidade{
protected:
	int hp;
	int reparador;
	int combatente;
	int exoesqueleto;
	Sala *s;
	
	string id;
	string nome;

	bool operador;
	bool respira;
public:
	
	Unidade();
	Unidade(int hp, int reparador, int combatente, bool operador, int exoesqueleto, bool respira, int localizacao, string nome, string id, Sala *s); //CONSTRUTOR PARA OS TRIPULANTES

	virtual ~Unidade(void);

	void inicioTurno(Nave *n);
	virtual void setHp(int hp) = 0;
	virtual int getHp() = 0;
	virtual void setReparador(int reparador) = 0;
	virtual int getReparador() = 0;
	virtual void setCombatente(int combatente) = 0;
	virtual int getCombatente() = 0;
	virtual void setExoesqueleto(int exoesqueleto) = 0;
	virtual int getExoesqueleto() = 0;
	virtual void setPosicaoSala(Sala *s) = 0;
	virtual Sala* getPosicaoSala() = 0;

	virtual void setId(string id) = 0;
	virtual string getId() = 0;
	virtual void setNome(string nome) = 0;
	virtual string getNome() = 0;

	virtual void setOperador(bool operador) = 0;
	virtual bool getOperador() = 0;
	virtual void setRespira(bool respira) = 0;
	virtual bool getRespira() = 0;

	//FALTA 
	
	//ataca


	virtual int reparaIntegridade(Nave *n);
};


#endif