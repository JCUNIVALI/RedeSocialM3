#ifndef CADASTRO_H
#define CADASTRO_H

#include <iostream>
#include <string>
#include <time.h>
using namespace std;

string userName() {
	string userName;
	cout << "Digite seu username: " << endl;
	cin >> userName;
	return userName;
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
  


}
void cadastrar() {

}


#endif
