#pragma once
#ifndef Sala_H
#define Sala_H
#include "Unidade.h"
#include "Nave.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Sala{
protected:
	int id;
	int posicao;
	int oxigenio;
	int integridade;

	bool brecha;
	bool fogo;
	bool curtoCircuito;

	string nome;

	vector <int> adjacentes;
	vector <Unidade*> unidades;
public:
	Sala();
	
	Sala(string nome, int posicao, int id);

	virtual ~Sala(void);
	
	//contrutor por copia
	Sala & operator=(const Sala & x){

		if (this == &x){
			return *this;
		}
		
		id = id;
		posicao = x.posicao;
		oxigenio = x.oxigenio;
		integridade = x.integridade;

		brecha = x.brecha;
		fogo = x.fogo;
		curtoCircuito = x.curtoCircuito;

		nome = x.nome;

		return *this;
	}
	
	//operador por atribuicao
	Sala(const Sala &x);

	//GET SET isso e a definicao tem de ser posta nos filhos sendo que esta � uma classe abstracta
	virtual void setId(int id) = 0;
	virtual int getId() = 0;
	virtual void setPosicao(int posicao) = 0;
	virtual int getPosicao() = 0;
	virtual void setOxigenio(int oxigenio) = 0;
	virtual int getOxigenio() = 0;
	virtual void setIntegridade(int integridade) = 0;
	virtual int getIntegridade() = 0;

	virtual void setBrecha(bool brecha) = 0;
	virtual bool getBrecha() = 0;
	virtual void setFogo(bool fogo) = 0;
	virtual bool getFogo() = 0;
	virtual void setCurtoCircuito(bool curtoCircuito) = 0;
	virtual bool getCurtoCircuito() = 0;

	virtual void setNome(string nome) = 0;
	virtual string getNome() = 0;

	//sala Escudo
	virtual void setNivelEscudo(int nivelEscudo) = 0;
	virtual int getNivelEscudo() = 0;
	virtual void setNivelEscudoActual(int nivelEscudoActual) = 0;
	virtual int getNivelEscudoActual() = 0;

	vector <Unidade*> getUnidades();
	virtual string setUnidade(Unidade *u) = 0;
	//FALTA

	
	virtual void setAdjacenteSala() = 0;
	virtual vector<int> getAdjacenteSala() = 0;
	
	void danificarSala(int dano);
	
	//string eliminaUnidade(Unidade *u);
	virtual Sala *duplica() = 0;


	virtual bool verificaId(string id)= 0;
};
#endif