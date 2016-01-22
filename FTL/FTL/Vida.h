#pragma once
#ifndef Vida_H
#define Vida_H
#include "Sala.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vida : public Sala{
public:

	Vida(string nome, int posicao);				//contrutor por defeito
	~Vida(void);			//destrutor
	Vida();

	void	setId(int id) { this->id = id; }
	int		getId() { return this->id; }
	void	setPosicao(int posicao) { this->posicao = posicao; }
	int		getPosicao() { return this->posicao; }
	void	setOxigenio(int oxigenio) { this->oxigenio = oxigenio; }
	int		getOxigenio() { return this->oxigenio; }
	void	setIntegridade(int integridade) { this->integridade = integridade; }
	int		getIntegridade() { return this->integridade; }

	void	setBrecha(bool brecha) { this->brecha = brecha; }
	bool	getBrecha() { return this->brecha; }
	void	setFogo(bool fogo) { this->fogo = fogo; }
	bool	getFogo() { return this->fogo; }
	void	setCurtoCircuito(bool curtoCircuito) { this->curtoCircuito = curtoCircuito; }
	bool	getCurtoCircuito() { return this->curtoCircuito; }

	void	setNome(string nome) { this->nome = nome; }
	string	getNome() { return this->nome; }
	bool verificaId(string id);
	string setUnidade(Unidade *u);
	//TRETA
	void	setNivelEscudo(int nivelEscudo);
	int		getNivelEscudo();
	void	setNivelEscudoActual(int nivelEscudoActual);
	int		getNivelEscudoActual();
	void	setAdjacenteSala();
	vector<int> getAdjacenteSala();


	Sala *duplica(){
		return new Vida(*this);
	}
};
#endif