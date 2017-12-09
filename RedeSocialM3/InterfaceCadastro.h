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
int CadastrarAno() {
	int selecao = 72;
	int cont = 1998;
	int opcao = 0;
	while (true) {
		if (selecao == 72) {
			opcao = 0;
			cont++;
		}
		if (selecao == 80) {
			opcao = 1;
			cont--;
		}
		if (opcao == 0) {
				system("cls");
				cout << "Escolha o ano: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << cont << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xBC";
			}
		if (opcao == 1) {
				system("cls");
				cout << "Escolha o ano: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << cont << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xBC";
			}
		if (selecao == 13) {
			system("cls");
			return cont;
		}
		selecao = _getch();
	}
}
int CadastrarDia() {
	int selecao = 72;
	int cont = 0;
	int opcao = 0;
	while (true) {
		if (selecao == 72) {
			opcao = 0;
			cont++;
		}
		if (selecao == 80) {
			opcao = 1;
			cont--;
		}
		if (opcao == 0) {
			if (cont > 31) {
				cont = 31;
			}
			if (cont < 10) {
				system("cls");
				cout << "Insira sua data de nascimento." << endl;
				cout << "Escolha o dia: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xBB" << endl << "\xBA" << cont << "  \xBA" << endl << "\xC8\xCD\xCD\xCD\xBC";
			}
			else if (cont > 9) {
				system("cls");
				cout << "Insira sua data de nascimento." << endl;
				cout << "Escolha o dia: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xBB" << endl << "\xBA" << cont << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xBC";
			}
		}
		if (opcao == 1) {
			if (cont < 1) {
				cont = 1;
			}
			if (cont < 10) {
				system("cls");
				cout << "Insira sua data de nascimento." << endl;
				cout << "Escolha o dia: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xBB" << endl << "\xBA" << cont << "  \xBA" << endl << "\xC8\xCD\xCD\xCD\xBC";
			}
			else if (cont > 9) {
				system("cls");
				cout << "Insira sua data de nascimento." << endl;
				cout << "Escolha o dia: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xBB" << endl << "\xBA" << cont << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xBC";
			}
		}
		if (selecao == 13) {
			system("cls");
			return cont;
		}
		selecao = _getch();
	}
}
int CadastrarMes() {
	int selecao = 72;
	int cont = 0;
	int opcao = 0;
	while (true) {
		if (selecao == 72) {
			opcao = 0;
			cont++;
		}
		if (selecao == 80) {
			opcao = 1;
			cont--;
		}
		if (opcao == 0) {
			if (cont > 12) {
				cont = 12;
			}
			if (cont == 1) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << " Janeiro "  << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 2) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "Fevereiro" << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 3) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "  Março  " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 4) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "  Abril  " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 5) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "  Maio   " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 6) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "  Junho  " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 7) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "  Julho  " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 8) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << " Agosto  " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 9) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "Setemebro" << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 10) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << " Outubro " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 11) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "Novembro " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 12) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "Dezembro " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
		}
		if (opcao == 1) {
			if (cont < 1) {
				cont = 1;
			}
			if (cont == 1) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << " Janeiro " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 2) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "Fevereiro" << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 3) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "  Março  " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 4) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "  Abril  " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 5) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "  Maio   " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 6) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "  Junho  " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 7) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "  Julho  " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 8) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << " Agosto  " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 9) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "Setemebro" << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 10) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << " Outubro " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 11) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "Novembro " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
			if (cont == 12) {
				system("cls");
				cout << "Escolha o mes: " << endl;
				cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl << "\xBA" << "Dezembro " << " \xBA" << endl << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
			}
		}
		if (selecao == 13) {
			system("cls");
			return cont;
		}
		selecao = _getch();
	}
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
			system("cls");
			return opcao;
		}
		genero = _getch();
	}
}



#endif