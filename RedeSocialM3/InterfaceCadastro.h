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
	cout << "Digite seu nome completo: " << endl;
}
void DataNascimento(int etapa) {
	system("cls");
	cout << "Digite sua data de nacimento: " << endl;
	if (etapa==0)
		cout <<endl<< "Dia: ";
	if (etapa == 1)
		cout << endl<< "Mes: ";
	if (etapa==2)
		cout << endl<<"Ano: ";
}



#endif