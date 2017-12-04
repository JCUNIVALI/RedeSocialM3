#ifndef INTERFACECADASTRO_H
#define INTERFACECADASTRO_H
#include <iostream>
using namespace std;

void CadastrarUserName() {
	cout << "Digite seu username: " << endl<<"@";
}
void CadastrarSenha(int etapa) {
	if (etapa == 1)
		cout << "Defina uma senha: " << endl;
	else if (etapa==2)
		cout << "Confirme sua senha: " << endl;
	else 
		cout << "Senhas nao conferem." << endl;
}
void CadastrarNome() {
	cout << "Digite seu nome completo" << endl;
}



#endif