#ifndef CADASTRO_H
#define CADASTRO_H

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <time.h>
#include "InterfaceCadastro.h"
#include "conio.h"

using namespace std;

string userName() {/*Ainda faltam etapas de verifica�ao do username, ja que � preciso o struct do usuario que ainda nao foi criado*/
	string userName;
	CadastrarUserName();
	cin >> userName;
	return "@"+userName;
}
string senhaCadastro() {
	string senha, temp;
	CadastrarSenha(1);
	cin >> senha;
	CadastrarSenha(2);
	cin >> temp;
	if (senha != temp) {
		CadastrarSenha(3);
		senhaCadastro();
	}
	return senha;
}
string nomeCadastro() {
	string nome;
	CadastrarNome();
	getline (cin,nome);
	for (int x = 0; x < nome.length(); x++) {
		if (x == 0) {
			if ((int)nome[x] >= 97 && (int)nome[x] <= 122) {
				nome[x]=(int)nome[x] - 32;
			}
		}
		if ((int)nome[x]==32) {
			if (x + 1 < nome.length()) {
				if ((int)nome[x + 1] >= 97 && (int)nome[x + 1] <= 122) {
					nome[x+1] = (int)nome[x+1] - 32;
				}
			}
		}
	}
	cout << nome;
	return nome;
}
string dataAtual() {
	char dataChar [9];
    char tempoChar [9];
	_strdate(dataChar);
    _strtime( tempoChar );
	char mes[2];
	char dia[2];
	for (int x = 0; x < 2; x++) {
		mes[x] = dataChar[x];
		dia[x] = dataChar[x + 3];
	}
	char temp[8];
	temp[0] = dia[0];
	temp[1] = dia[1];
	temp[2] = '/';
	temp[3] = mes[0];
	temp[4] = mes[1];
	temp[5] = '/';
	temp[6] = dataChar[6];
	temp[7] = dataChar[7];
	string data;
	for (int i = 0; i < 8; i++) {
		data += temp[i];
	}
	return data;
}
void separarData(int &diaTemp, int &mesTemp, int &anoTemp) {
	string data=dataAtual();
	int dia = (int)data[0] - 48;
	diaTemp = (int)data[1] - 48;
	int mes = (int)data[3] - 48;
	mesTemp = (int)data[4] - 48;
	int ano = (int)data[6] - 48;
	anoTemp = (int)data[7] - 48;
	diaTemp += dia * 10;
	mesTemp += mes * 10;
	anoTemp += ano * 10;
}
string dataCadastro(string &erro) {
	string data;
	DataNascimento(0);
	int dia, mes, ano;
	int diaTool, mesTool, anoTool, anoAtual;
	separarData(diaTool, mesTool, anoTool);
	cin >> dia;
	DataNascimento(1);
	cin >> mes;
	DataNascimento(2);
	cin >> ano;
	anoAtual = anoTool + 2000;
	anoTool +=2000-18;
	if (ano>40 && ano<100) {
		ano += 1900;
	}
	if (ano == 0) {
		ano = 2000;
	}
	if (ano > 0 && ano < 40) {
		ano += 2000;
	}
	int janeiro = 28;
	int fevereiro = 28;
	int marco = 31;
	int abril = 30;
	int maio = 31;
	int junho = 30;
	int julho = 31;
	int agosto = 31;
	int setembro = 30;
	int outubro = 31;
	int novembro = 30;
	int desembro = 31;
	int anosBissextos=0;
	for (int x = ano; x <= anoAtual; x++) {
		if (x % 4 == 0) {
			anosBissextos++;
		}
	}
	cout << anosBissextos;
	
	

	return data;
}
void cadastrar() {
	string erro;
	dataCadastro(erro);
	cout << erro;
}


#endif
