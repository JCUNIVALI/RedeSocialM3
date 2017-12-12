#ifndef INTERFACECADASTRO_H
#define INTERFACECADASTRO_H
#include <iostream>
#include "conio.h"
#include "Botao.h"
using namespace std;

void CadastrarUserName() {
	botao("Digite seu username");
	cout << "@";
}
void CadastrarSenha(int etapa) {
	if (etapa == 1)
		botao("Defina uma senha ");
	else if (etapa == 2)
		botao("Confirme sua senha ");
	else
		botao("Senhas nao conferem ");
}
void CadastrarNome() {
	botao("Digite seu nome completo ");
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
				botao("Escolha o seu ano de nascimento: ");
				botao(cont);
			}
		if (opcao == 1) {
				system("cls");
				botao("Escolha o seu ano de nascimento: ");
				botao(cont);
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
				botao("Escolha o dia do seu nascimento.");
				botao(cont);
			}
			else if (cont > 9) {
				system("cls");
				botao("Escolha o dia do seu nascimento.");
				botao(cont);
			}
		}
		if (opcao == 1) {
			if (cont < 1) {
				cont = 1;
			}
			if (cont < 10) {
				system("cls");
				botao("Escolha o dia do seu nascimento.");
				botao(cont);
			}
			else if (cont > 9) {
				system("cls");
				botao("Escolha o dia do seu nascimento.");
				botao(cont);
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
				botao("Escolha seu mes de nascimento: ");
				botao("Janeiro");
			}
			if (cont == 2) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Fevereiro");
			}
			if (cont == 3) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Marco");
			}
			if (cont == 4) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Abril");
			}
			if (cont == 5) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Maio");
			}
			if (cont == 6) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("junho");
			}
			if (cont == 7) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Julho");
			}
			if (cont == 8) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Agosto");
			}
			if (cont == 9) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Setembro");
			}
			if (cont == 10) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Outubro");
			}
			if (cont == 11) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Novembro");
			}
			if (cont == 12) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Dezembro");
			}
		}
		if (opcao == 1) {
			if (cont < 1) {
				cont = 1;
			}
			if (cont == 1) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Janeiro");
			}
			if (cont == 2) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Fevereiro");
			}
			if (cont == 3) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Marco");
			}
			if (cont == 4) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Abril");
			}
			if (cont == 5) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Maio");
			}
			if (cont == 6) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Junho");
			}
			if (cont == 7) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Julho");
			}
			if (cont == 8) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Agosto");
			}
			if (cont == 9) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Setembro");
			}
			if (cont == 10) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Outubro");
			}
			if (cont == 11) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Novembro");
			}
			if (cont == 12) {
				system("cls");
				botao("Escolha seu mes de nascimento: ");
				botao("Dezembro");
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
			botao("Escolha seu genero: ");
			botao("Masculino");
			botao_2("Feminino");
		}
		if (opcao == 1) {
			system("cls");
			botao("Escolha seu genero: ");
			botao_2("Masculino");
			botao("Feminino");
			
		}
		if (genero == 13) {
			system("cls");
			return opcao;
		}
		genero = _getch();
	}
}



#endif