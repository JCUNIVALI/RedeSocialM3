#ifndef CADASTRO_H
#define CADASTRO_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

string userName() {
	string userName;
	cout << "Digite seu username: " << endl;
	cin >> userName;
	return "@"+userName;
}
string cadastrarSenha() {
	string senha, temp;
	cout << "Defina uma senha: " << endl;
	cin >> senha;
	cout << "Confirme sua senha: " << endl;
	cin >> temp;
	if (senha != temp) {
		cout << "Senhas nao conferem." << endl;
		cadastrarSenha();
	}
	return senha;
}
string nome() {
	string nome;
	cout << "Digite seu nome completo";
	cin >> nome;
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

}


#endif
