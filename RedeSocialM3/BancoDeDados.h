#ifndef BANCODEDADOS_H
#define BANCODEDADOS_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <time.h>
#include "InterfaceCadastro.h"
#include "conio.h"

using namespace std;
struct Usuario {
	string UserName;
	string SenhaCadastro;
	string NomeUsuario;
	string DataNascimento;
	string Genero;
	Usuario(string umUserName, string umSenhaCadastro, string umNomeUsuario, string umDataNascimento, string umGenero) {
		this->UserName = umUserName;
		this->SenhaCadastro = umSenhaCadastro;
		this->NomeUsuario = umNomeUsuario;
		this->DataNascimento = umDataNascimento;
		this->Genero = umGenero;
	}
};
struct ElementoListaUsuario {
	Usuario *dado;
	ElementoListaUsuario *proximo;
	ElementoListaUsuario(Usuario *umdado) {
		this->dado = umdado;
		this->proximo = NULL;
	}
};
struct ListaUsuario {
	ElementoListaUsuario *inicio;
	ListaUsuario(ElementoListaUsuario *uminicio) {
		this->inicio = uminicio;
	}
	void InserirElemento(ElementoListaUsuario *NovoUsuario) {
		ElementoListaUsuario *atual = this->inicio;
		if (atual == NULL) {
			this->inicio = NovoUsuario;
			return;
		}
		do {
			if (atual->proximo == NULL) {
				atual->proximo = NovoUsuario;
				break;
			}
			atual = atual->proximo;
		} while(atual != NULL);
	}
	bool VerificarUsername(string username, string &erro) {
		if (this->inicio == NULL) {
			return true;
		}
		if (this->inicio != NULL) {
			ElementoListaUsuario *atual = this->inicio;
			while (atual != NULL){
				if (atual->dado->UserName == username) {
					erro = "!!!!!!!!!Esse username ja existe!!!!!!!!";
					return false;
				}
				atual = atual->proximo;
			}
			return true;
		}
		return true;
	}
	bool RemoverUltimoElemento() {
		if (this->inicio == NULL) {
			return false;
		}
		ElementoListaUsuario *atual = this->inicio;
		while (atual->proximo != NULL) {
			if (atual->proximo->proximo != NULL) {
				delete atual->proximo;
				atual->proximo = NULL;
				return true;
			}
			atual = atual->proximo;
		}
		delete this->inicio;
		this->inicio = NULL;
	}
};
string UserName() {
	string userName;
	CadastrarUserName();
	cin >> userName;
	system("cls");
	return "@"+userName;
}
string SenhaCadastro() {
	string senha, temp;
	do {
		CadastrarSenha(1);
		cin >> senha;
		CadastrarSenha(2);
		cin >> temp;
		if (senha != temp) {
			CadastrarSenha(3);
		}
	} while (senha != temp);
	system("cls");
	return senha;
}
string NomeCadastro() {
	string nome;
	CadastrarNome();
	getline(cin, nome);
	for (int x = 0; x < nome.length(); x++) {
		if (x == 0) {
			if ((int)nome[x] >= 97 && (int)nome[x] <= 122) {
				nome[x]=(int)nome[x] - 32;
			}
		}
		if ((int)nome[x]==32) {
			if (x + 1 < nome.length()) {
				if ((int)nome[x + 1] >= 97 && (int)nome[x + 1] <= 122) {
					nome[x+1] = (int)nome[x+1] - 32;
				}
			}
		}
	}
	system("cls");
	return nome;
}
string DataAtual() {
	char dataChar [9];
    char tempoChar [9];
	_strdate(dataChar);
    _strtime( tempoChar );
	char mes[2];
	char dia[2];
	for (int x = 0; x < 2; x++) {
		mes[x] = dataChar[x];
		dia[x] = dataChar[x + 3];
	}
	char temp[8];
	temp[0] = dia[0];
	temp[1] = dia[1];
	temp[2] = '/';
	temp[3] = mes[0];
	temp[4] = mes[1];
	temp[5] = '/';
	temp[6] = dataChar[6];
	temp[7] = dataChar[7];
	string data;
	for (int i = 0; i < 8; i++) {
		data += temp[i];
	}
	return data;
}
void separarData(int &diaTemp, int &mesTemp, int &anoTemp) {
	string data=DataAtual();
	int dia = (int)data[0] - 48;
	diaTemp = (int)data[1] - 48;
	int mes = (int)data[3] - 48;
	mesTemp = (int)data[4] - 48;
	int ano = (int)data[6] - 48;
	anoTemp = (int)data[7] - 48;
	diaTemp += dia * 10;
	mesTemp += mes * 10;
	anoTemp += ano * 10;
}
bool validaData(int dia,int mes,int &ano) {
	int diaTool, mesTool, anoTool;
	separarData(diaTool, mesTool, anoTool);
	anoTool += 2000;
	int meses[12];
	meses[0] = 31;
	meses[1] = 28;
	meses[2] = 31;
	meses[3] = 30;
	meses[4] = 31;
	meses[5] = 30;
	meses[6] = 31;
	meses[7] = 31;
	meses[8] = 30;
	meses[9] = 31;
	meses[10] = 30;
	meses[11] = 31;
	int anosBissextos = 0;
	for (int x = ano; x <= anoTool; x++) {
		if (x % 4 == 0) {
			anosBissextos++;
		}
	}
	if (mes > 2 && ano % 4 == 0) {
		anosBissextos--;
	}
	int diaCont = meses[mes - 1] -dia;
	for (int x = mes; x < 12; x++) {
		diaCont += meses[x];
	}
	for (int x = ano + 1; x < anoTool; x++) {
		diaCont += 365;
	}
	for (int x = 0; x < mesTool-1; x++) {
		diaCont += meses[x];
	}
	diaCont += diaTool+ anosBissextos;
	if (diaCont >= 6576) {
		return true;
	}
	return false;
}
string dataCadastro(string &erro) {
	string data;
	int dia, mes, ano;
	ano = CadastrarAno();
	mes = CadastrarMes();
	if (mes == 2 && ano % 4 == 0) {
		dia = CadastrarDia(29);
	}
	else if (mes == 2 && ano % 4 != 0) {
		dia = CadastrarDia(28);
	}
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
		dia = CadastrarDia(31);
	}
	else if(mes==4||mes==6||mes==9||mes==11) {
		dia = CadastrarDia(30);
	}
	system("cls");
	if (validaData(dia, mes, ano)) {
		data = to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
		return data;
	}
	erro = "Você não tem a idade mínima para criar uma conta!";
	return erro;
}
string Genero(int selecao) {
	if (selecao == 0) {
		return "Masculino";
	}
	return "Feminino";
}
void BancoDeDados() {
	ListaUsuario *lista = new ListaUsuario(new ElementoListaUsuario(new Usuario("@admin", "admin", "Administrador", " ", " ")));
	string erro=" ";
	string username, senha, nome, data, genero;
	while (true) { //condição pra adicionar um novo Usuario//
		do  {
			if (erro!=" ")
				cout << erro << endl;
			username = UserName();
		} while (!lista->VerificarUsername(username, erro));
		erro = " ";
		senha = SenhaCadastro();
		getchar();
		nome = NomeCadastro();
		data = dataCadastro(erro);
		if (erro != " ") {
			setlocale(LC_ALL, "Portuguese");
			cout << erro << endl;
			break;
		}
		genero = Genero(SelecionarGenero());
		lista->InserirElemento(new ElementoListaUsuario(new Usuario(username, senha, nome, data, genero)));
	}
	
}

#endif
