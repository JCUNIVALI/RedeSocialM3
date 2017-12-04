#ifndef CADASTRO_H
#define CADASTRO_H

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <time.h>
#include "InterfaceCadastro.h"

using namespace std;

string userName() {/*Ainda faltam etapas de verificaçao do username, ja que é preciso o struct do usuario que ainda nao foi criado*/
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
	string nome="nada";
	CadastrarNome();
	cin >> nome;
	int tam = nome.length;
	for (int x = 0; x < tam; x++) {
		if (x == 0) {
			if ((int)nome[x] >= 97 && (int)nome[x] <= 122) {
				nome[x]=(int)nome[x] - 32;
			}
		}
		if ((int)nome[x]<tam) {
				if ((int)nome[x + 1] >= 97 && (int)nome[x + 1] <= 122) {
					nome[x]=(int)nome[x] - 32;
				}
			}
		}
	}
	cout << nome;
	return nome;
}
bool data() {
	char dataString [9];
    char tempoString [9];
	_strdate(dataString);
    _strtime( tempoString );
	char mes[2];
	char dia[2];
	for (int x = 0; x < 2; x++) {
		mes[x] = dataString[x];
		dia[x] = dataString[x + 3];
	}
	char temp[9];
	temp[0] = dia[0];
	temp[1] = dia[1];
	temp[2] = '/';
	temp[3] = mes[0];
	temp[4] = mes[1];
	temp[5] = '/';
	temp[6] = dataString[6];
	temp[7] = dataString[7];
	
	string data;
	for (int i = 0; i < 8; i++) {
		data += temp[i];
	}
	cout << data;
	return false;
}
void cadastrar() {
	data();
}


#endif
