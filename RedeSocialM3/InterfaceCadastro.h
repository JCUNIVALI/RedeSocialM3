#ifndef INTERFACECADASTRO_H
#define INTERFACECADASTRO_H
#include <iostream>
#include "conio.h"
#include "Botao.h"
using namespace std;

void CadastrarUserName() {
	botao_2("Para sair digite somente exit");
	botao("Digite seu username");
	cout << "@";
}
void CadastrarSenha(int etapa) {
	if (etapa == 1) {
		botao_2("Para sair digite somente exit");
		botao("Defina uma senha ");
	}
	else if (etapa == 2)
		botao("Confirme sua senha ");
	else {
		system("cls");
		botao("Senhas nao conferem ");
	}
}
void CadastrarNome() {
	botao_2("Para sair digite somente exit");
	botao("Digite seu nome completo ");
}
int CadastrarAno() {
	int selecao = 77;
	int cont = 1998;
	int opcao = 0;
	while (true) {
		system("cls");
		botao_2("Para sair pressione Esc");
		botao("Escolha o seu ano de nascimento: ");
		cout << "\xAE\t\xAF" << endl;
		if (selecao == 77) {
			opcao = 0;
			cont++;
		}
		if (selecao == 75) {
			opcao = 1;
			cont--;
		}
		if (opcao == 0)
			botao(cont);
		if (opcao == 1)
				botao(cont);
		if (selecao == 13) {
			system("cls");
			return cont;
		}
		selecao = _getch();
		if (selecao == 27) {
			system("cls");
			return -1;
		}
	}
}
int CadastrarDia(int dias) {
	int selecao = 77;
	int cont = 0;
	int opcao = 0;
	while (true) {
		system("cls");
		botao_2("Para sair pressione Esc");
		botao("Escolha o dia do seu nascimento: ");
		cout << "\xAE\t\xAF" << endl;
		if (selecao == 77) {
			opcao = 0;
			cont++;
		}
		if (selecao == 75) {
			opcao = 1;
			cont--;
		}
		if (opcao == 0) {
			if (cont > dias)
				cont = dias;
			if (cont < 10)
				botao(cont);
			else if (cont > 9)
				botao(cont);
		}
		if (opcao == 1) {
			if (cont < 1)
				cont = 1;
			if (cont < 10)
				botao(cont);
			else if (cont > 9)
				botao(cont);
		}
		if (selecao == 13) {
			system("cls");
			return cont;
		}
		selecao = _getch();
		if (selecao == 27) {
			system("cls");
			return -1;
		}
	}
}
int CadastrarMes() {
	int selecao = 77;
	int cont = 0;
	int opcao = 0;
	while (true) {
		system("cls");
		botao_2("Para sair pressione Esc");
		botao("Escolha seu mes de nascimento: ");
		cout << "\xAE\t\xAF" << endl;
		if (selecao == 77) {
			opcao = 0;
			cont++;
		}
		if (selecao == 75) {
			opcao = 1;
			cont--;
		}
		if (opcao == 0) {
			if (cont > 12)
				cont = 12;
			if (cont == 1)
				botao("Janeiro");
			if (cont == 2)
				botao("Fevereiro");
			if (cont == 3)
				botao("Marco");
			if (cont == 4)
				botao("Abril");
			if (cont == 5)
				botao("Maio");
			if (cont == 6)
				botao("Junho");
			if (cont == 7)
				botao("Julho");
			if (cont == 8)
				botao("Agosto");
			if (cont == 9)
				botao("Setembro");
			if (cont == 10)
				botao("Outubro");
			if (cont == 11)
				botao("Novembro");
			if (cont == 12)
				botao("Dezembro");
		}
		if (opcao == 1) {
			if (cont < 1)
				cont = 1;
			if (cont == 1)
				botao("Janeiro");
			if (cont == 2)
				botao("Fevereiro");
			if (cont == 3)
				botao("Marco");
			if (cont == 4)
				botao("Abril");
			if (cont == 5)
				botao("Maio");
			if (cont == 6)
				botao("Junho");
			if (cont == 7)
				botao("Julho");
			if (cont == 8)
				botao("Agosto");
			if (cont == 9)
				botao("Setembro");
			if (cont == 10)
				botao("Outubro");
			if (cont == 11)
				botao("Novembro");
			if (cont == 12)
				botao("Dezembro");
		}
		if (selecao == 13) {
			system("cls");
			return cont;
		}
		selecao = _getch();
		if (selecao == 27) {
			system("cls");
			return -1;
		}
	}
}
int SelecionarGenero() {
	int genero = 72;
	int opcao = 0;
	while (true) {
		system("cls");
		botao_2("Para sair pressione Esc");
		botao("Escolha seu genero: ");
		if (genero == 72)
			opcao = 0;
		if (genero == 80)
			opcao = 1;
		if (opcao == 0) {
			botao("Masculino");
			botao_2("Feminino");
		}
		if (opcao == 1) {
			botao_2("Masculino");
			botao("Feminino");
			
		}
		if (genero == 13) {
			system("cls");
			return opcao;
		}
		genero = _getch();
		if (genero == 27) {
			system("cls");
			return genero;
		}
	}
}
int Menu() {
	int selecionado = 72;
	int opcao = 0;
	while (true) {
		if (selecionado == 72)
			if (opcao > 0)
				opcao--;
		if (selecionado == 80)
			if (opcao<4)
				opcao ++;
		switch (opcao){
			case 0:
				system("cls");
				botao("Entrar");
				botao_2("Criar Usuario");
				botao_2("Gerar Usuario");
				botao_2("Fechar Programa");
				break;
			case 1:
				system("cls");
				botao_2("Entrar");
				botao("Criar Usuario");
				botao_2("Gerar Usuario");
				botao_2("Fechar Programa");
				break;
			case 2:
				system("cls");
				botao_2("Entrar");
				botao_2("Criar Usuario");
				botao("Gerar Usuario");
				botao_2("Fechar Programa");
				break;
			case 3:
				system("cls");
				botao_2("Entrar");
				botao_2("Criar Usuario");
				botao_2("Gerar Usuario");
				botao("Fechar Programa");
				break;
		}
		if (selecionado == 13) {
			system("cls");
			return opcao;
		}
		selecionado = _getch();
	}
}
void telaLoguin(int passo) {
	switch (passo)
	{
	case 0:
		system("cls");
		botao_2("Para sair digite somente exit");
		botao("Digite seu username ");
		break;
	case 1:
		system("cls");
		botao_2("Para sair digite somente exit");
		botao_2("Username nao cadastrado!");
		botao("Digite seu username ");
		break;
	case 2:
		system("cls");
		botao_2("Para sair digite somente exit");
		botao("Digite sua senha");
		break;
	case 3:
		system("cls");
		botao_2("Para sair digite somente exit");
		botao_2("Senha incorreta");
		botao("Por gentileza, digite sua senha");
		break;
	case 4:
		system("cls");
		botao_2("Para sair digite somente exit");
		botao_2("Voce esqueceu o @");
		botao("Por gentileza, digite seu username");
		break;
	}
}
void telaNewPost(int passo) {
	switch (passo)
	{
	case 0:
		system("cls");
		botao_2("Para sair digite somente exit");
		botao_2("Digite seu texto: ");
		break;
	case 1:
		system("cls");
		botao_2("Para sair digite somente exit");
		botao_2("O Post deve conter no maximo 280 caracteres!");
		botao_2("Digite seu texto: ");
		break;
	case 2:
		system("cls");
		botao_2("Para sair digite somente exit");
		botao_2("O @username informado nao existe, verifique se esta escrito corretamente!");
		break;
	default:
		break;
	}
}
void telaExcluirPost() {
	system("cls");
	botao_2("Para sair pressione ESC");
	botao("Selecione o Post a ser excluido");
	cout << "\t\xAE\t\xAF" << endl;
}
void timeLine(string logado) {
	system("cls");
	botao("LOGADO: " + logado);
	botao_2("Enter Novo Post");
	botao_2("'x' deletar Post");
	botao_2("Esc Sair");
	cout << endl << endl;
	string data, tempo;
	char dataemchar[9];
	char tempoemchar[9];
	_strtime(tempoemchar);
	_strdate(dataemchar);
	tempo = tempoemchar;
	data = dataemchar;
	botao_2("__UNIBOOK______TIMELINE_______________________________Ultima atualizacao feita as "+tempo+"______" + data + "___");
}
#endif