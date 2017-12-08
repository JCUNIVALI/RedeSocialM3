#ifndef INTERFACECADASTRO_H
#define INTERFACECADASTRO_H
#include <iostream>
#include "conio.h"
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
int SelecionarGenero() {
	int genero = 72;
	int opcao = 0;
	while (true) {
		if (genero == 72) {
			opcao = 0;
		}
		if (genero == 80) {
			opcao = 1;
		}
		if (opcao == 0) {
			system("cls");
			cout << "Escolha seu genero: " << endl;
			cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "Masculino" << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC" << endl << " Feminino";
		}
		if (opcao == 1) {
			system("cls");
			cout << "Escolha seu genero: " << endl;
			cout << " Masculino" << endl << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "Feminino" << "  \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC" << endl;
		}
		if (genero == 13) {
			return opcao;
		}
		genero = _getch();
	}
}



#endif