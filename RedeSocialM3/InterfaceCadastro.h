#ifndef INTERFACECADASTRO_H
#define INTERFACECADASTRO_H
#include <iostream>
#include "conio.h"
#include "Botao.h"
using namespace std;

void CadastrarUserName() {
	botao("Digite seu username", 0);
	cout << "@";
}
void CadastrarSenha(int etapa) {
	if (etapa == 1)
		botao("Defina uma senha ", 0);
	else if (etapa == 2)
		botao("Confirme sua senha ", 0);
	else
		botao("Senhas nao conferem ", 0);
}
void CadastrarNome() {
	botao("Digite seu nome completo ", 0);
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
				botao("Escolha o seu ano de nascimento: ", 0);
				botao(cont, 0);
			}
		if (opcao == 1) {
				system("cls");
				botao("Escolha o seu ano de nascimento: ", 0);
				botao(cont, 0);
			}
		if (selecao == 13) {
			system("cls");
			return cont;
		}
		selecao = _getch();
	}
}
int CadastrarDia(int dias) {
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
			if (cont > dias) {
				cont = dias;
			}
			if (cont < 10) {
				system("cls");
				botao("Escolha o dia do seu nascimento.", 0);
				botao(cont, 0);
			}
			else if (cont > 9) {
				system("cls");
				botao("Escolha o dia do seu nascimento.", 0);
				botao(cont, 0);
			}
		}
		if (opcao == 1) {
			if (cont < 1) {
				cont = 1;
			}
			if (cont < 10) {
				system("cls");
				botao("Escolha o dia do seu nascimento.", 0);
				botao(cont, 0);
			}
			else if (cont > 9) {
				system("cls");
				botao("Escolha o dia do seu nascimento.", 0);
				botao(cont, 0);
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
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Janeiro", 0);
			}
			if (cont == 2) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Fevereiro", 0);
			}
			if (cont == 3) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Marco", 0);
			}
			if (cont == 4) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Abril", 0);
			}
			if (cont == 5) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Maio", 0);
			}
			if (cont == 6) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("junho", 0);
			}
			if (cont == 7) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Julho", 0);
			}
			if (cont == 8) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Agosto", 0);
			}
			if (cont == 9) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Setembro", 0);
			}
			if (cont == 10) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Outubro", 0);
			}
			if (cont == 11) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Novembro", 0);
			}
			if (cont == 12) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Dezembro", 0);
			}
		}
		if (opcao == 1) {
			if (cont < 1) {
				cont = 1;
			}
			if (cont == 1) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Janeiro", 0);
			}
			if (cont == 2) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Fevereiro", 0);
			}
			if (cont == 3) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Marco", 0);
			}
			if (cont == 4) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Abril", 0);
			}
			if (cont == 5) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Maio", 0);
			}
			if (cont == 6) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Junho", 0);
			}
			if (cont == 7) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Julho", 0);
			}
			if (cont == 8) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Agosto", 0);
			}
			if (cont == 9) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Setembro", 0);
			}
			if (cont == 10) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Outubro", 0);
			}
			if (cont == 11) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Novembro", 0);
			}
			if (cont == 12) {
				system("cls");
				botao("Escolha seu mes de nascimento: ", 0);
				botao("Dezembro", 0);
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
			botao("Escolha seu genero: ", 0);
			botao("Masculino", 0);

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