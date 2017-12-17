#ifndef BANCODEDADOS_H
#define BANCODEDADOS_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <time.h>
#include "InterfaceCadastro.h"
#include "conio.h"
#include "GERADORCONTA.h"

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
	ElementoListaUsuario(Usuario *umDado) {
		this->dado = umDado;
		this->proximo = NULL;
	}
};
struct Post {
	string post;
	string usuario;
	Post(string umPost, string umUsuario) {
		this->post = umPost;
		this->usuario = umUsuario;
	}
};
struct ElementoListaPost {
	Post *dado;
	ElementoListaPost *proximo;
	ElementoListaPost(Post *umDado){
		this->dado = umDado;
		this->proximo = NULL;
	}
};
struct ListaUsuario {
	ElementoListaUsuario *inicio;
	ElementoListaPost *iniciopost;
	ListaUsuario(ElementoListaUsuario *uminicio, ElementoListaPost *postInicial) {
		this->inicio = uminicio;
		this->iniciopost = postInicial;
	}
	bool verificaLoguin(string conta, string senha) {
		ElementoListaUsuario *atual = this->inicio;
		do {
			if (atual->dado->UserName == conta) {
				if (atual->dado->SenhaCadastro == senha) {
					return true;
				}
			}
			atual = atual->proximo;
		} while (atual != NULL);
		return false;
	}
	void MostrarPostUsuario(ElementoListaPost *atual) {
		if (atual->proximo != NULL) {
			MostrarPostUsuario(atual->proximo);
		}
		cout << endl;
		botao_2(atual->dado->usuario);
		cout<< endl;
		cout << "\t" << atual->dado->post << endl;
		return;
	}
	void InserirPost(ElementoListaPost *novoPost) {
		ElementoListaPost *atual = this->iniciopost;
		do {
			if (atual->proximo == NULL) {
				atual->proximo = novoPost;
				break;
			}
			atual = atual->proximo;
		} while (atual != NULL);
	}
	void InserirUsuario(ElementoListaUsuario *NovoUsuario) {
		ElementoListaUsuario *atual = this->inicio;
		do {
			if (atual->proximo == NULL) {
				atual->proximo = NovoUsuario;
				break;
			}
			atual = atual->proximo;
		} while(atual != NULL);
	}
	bool VerificarUsername(string username, string &erro) {
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
	void ExcluirPostUsuario(string user,int &post,bool confirmacao) {
		ElementoListaPost *atual = this->iniciopost;
		ElementoListaPost *contador = this->iniciopost;
		int cont = 0, max = 0;
		do {
			if (contador->dado->usuario == user) {
				max++;
			}
			contador = contador->proximo;
		} while (contador != NULL);
		contador = this->iniciopost;
		do {
			if (atual->dado->usuario == user) {
				if (post == cont) {
					if (!confirmacao) {
						cout << "\t" << atual->dado->post << endl;
						return;
					}
					if (confirmacao) {
						if (atual->proximo != NULL) {
							contador->proximo = atual->proximo;
							delete atual;
							return;
						}
						contador->proximo = NULL;
						delete atual;
						return;
					}
				}
				if (post >= max) {
					post = max-1;
				}
				cont++;
			}
			contador = atual;
			atual = atual->proximo;
		} while (atual != NULL);
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
		if (senha == "exit")
			return senha;
		CadastrarSenha(2);
		cin >> temp;
		if (temp == "exit")
			return temp;
		if (senha != temp)
			CadastrarSenha(3);
	} while (senha != temp);
	system("cls");
	return senha;
}
string NomeCadastro() {
	string nome;
	CadastrarNome();
	getline(cin, nome);
	for (int x = 0; x < nome.length(); x++) {
		if (x == 0)
			if ((int)nome[x] >= 97 && (int)nome[x] <= 122)
				nome[x]=(int)nome[x] - 32;
		if ((int)nome[x]==32)
			if (x + 1 < nome.length())
				if ((int)nome[x + 1] >= 97 && (int)nome[x + 1] <= 122)
					nome[x+1] = (int)nome[x+1] - 32;
	}
	system("cls");
	return nome;
}
string DataAtual() {
	char dataChar [9];
	_strdate(dataChar);
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
	for (int i = 0; i < 8; i++)
		data += temp[i];
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
		if (x % 4 == 0)
			anosBissextos++;
	}
	if (mes > 2 && ano % 4 == 0)
		anosBissextos--;
	int diaCont = meses[mes - 1] -dia;
	for (int x = mes; x < 12; x++)
		diaCont += meses[x];
	for (int x = ano + 1; x < anoTool; x++)
		diaCont += 365;
	for (int x = 0; x < mesTool-1; x++)
		diaCont += meses[x];
	diaCont += diaTool+ anosBissextos;
	if (diaCont >= 6576)
		return true;
	return false;
}
string dataCadastro(string &erro) {
	string data;
	int dia, mes, ano;
	ano = CadastrarAno();
	if (ano == -1)
		return "0";
	mes = CadastrarMes();
	if (mes == -1)
		return "0";
	if (mes == 2 && ano % 4 == 0) {
		dia = CadastrarDia(29);
		if (dia == -1)
			return "0";
	}
	else if (mes == 2 && ano % 4 != 0) {
		dia = CadastrarDia(28);
		if (dia == -1)
			return "0";
	}
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
		dia = CadastrarDia(31);
		if (dia == -1)
			return "0";
	}
	else if(mes==4||mes==6||mes==9||mes==11) {
		dia = CadastrarDia(30);
		if (dia == -1)
			return "0";
	}
	system("cls");
	if (validaData(dia, mes, ano)) {
		data = to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
		return data;
	}
	erro = "Voce nao tem a idade minima para criar uma conta!";
	return erro;
}
string Genero(int selecao) {
	if (selecao == 0)
		return "Masculino";
	if (selecao==1)
		return "Feminino";
	else 
		return "exit";
}
void CriarConta(ListaUsuario *lista) {
	string erro = " ";
	string username, senha, nome, data, genero;
	do {
		if (erro != " ")
			botao_2(erro);
		username = UserName();
	} while (!lista->VerificarUsername(username, erro));
	if (username == "@exit")
		return;
	erro = " ";
	senha = SenhaCadastro();
	if (senha == "exit")
		return;
	getchar();
	nome = NomeCadastro();
	if (nome == "Exit")
		return;
	data = dataCadastro(erro);
	if (data == "0")
		return;
	if (erro != " ") {
		botao_2(erro);
		system("pause");
		return;
	}
	genero = Genero(SelecionarGenero());
	if (genero == "exit")
		return;
	lista->InserirUsuario(new ElementoListaUsuario(new Usuario(username, senha, nome, data, genero)));
}
string loguin(ListaUsuario *lista) {
	string log, senha, erro;
	telaLoguin(0);
	cin >> log;
	if (log == "@exit" || log == "exit")
		return "exit";
	do {
		while (log[0] != '@') {
			telaLoguin(4);
			cin >> log;
			if (log == "@exit" || log == "exit") 
				return "exit";
			if (lista->VerificarUsername(log, erro)) {
				telaLoguin(1);
				cin >> log;
				if (log == "@exit" || log == "exit") 
					return "exit";
			}
		}
		if (lista->VerificarUsername(log, erro)) {
			telaLoguin(1);
			cin >> log;
			if (log == "@exit" || log == "exit")
				return "exit";
		}
	} while (lista->VerificarUsername(log, erro));
	telaLoguin(2);
	cin >> senha;
	if (senha == "exit")
		return "exit";
	while (!lista->verificaLoguin(log, senha)) {
		telaLoguin(3);
		cin >> senha;
		if (senha == "exit")
			return "exit";
	}
	return log;

}
void opcaoMenu(ListaUsuario *lista, bool &sair, string &conta,int &gerarconta) {
	int opcao = Menu();
	if (opcao == 0) {
		conta=loguin(lista);
		if (conta == "exit")
			opcaoMenu(lista, sair, conta,gerarconta);
		return;
	}
	if (opcao == 1) {
		CriarConta(lista);
		opcaoMenu(lista,sair,conta,gerarconta);
		return;
	}
	if (opcao == 2) {
		conta = "@Prof_Andre";
		if (gerarconta==0)
			GERADOR_DE_CONTA(lista);
		gerarconta++;
		return;
	}
	if (opcao == 3) {
		sair = true;
		return;
	}
}
string criarPost(string conta,ListaUsuario *lista) {
	string texto;
	telaNewPost(0);
	bool valida = true;
	do {
		do {
			getline(cin, texto);
			if (texto == "exit" || texto == "")
				return "exit";
			if (texto.length() > 280) {
				telaNewPost(1);
			}
		} while (texto.length() > 280);
		for (int x = 0; x < texto.length(); x++) { 
			if (texto[x] == '@') {
				int max=0;
				string user, erro;
				int i = x;
				do {
					if ((int)texto[i] == 32 || i == texto.length() - 1) {
						if (i == texto.length() - 1)
							max = i + 1;
						else
							max = i;
					}
					i++;
				} while (max == 0);
				for (int y = x; y < max; y++) {
					user += texto[y];
				}
				if (lista->VerificarUsername(user, erro)) {
					telaNewPost(2);
					valida = false;
				}
				else
					valida = true;
			}
		}
	} while (!valida);
	return texto;
}
void excluirPost(string user,ListaUsuario *lista) {
	int post = 72;
	int opcao = 0;
	while (true) {
		telaExcluirPost();
		if (post == 72) {
			if (opcao>0)
				opcao --;
		}
		if (post == 80) {
			opcao ++;
		}
		lista->ExcluirPostUsuario(user, opcao,false);
		post = _getch();
		if (post == 13) {
			lista->ExcluirPostUsuario(user, opcao, true);
			return;
		}
		if (post == 27) {
			return;
		}
	}
}
void Unibook() {
	Usuario *admin = new Usuario("@admin", " ", "Administrador", " ", " ");
	ElementoListaPost *elementoPostAdmin = new ElementoListaPost(new Post("Bem Vindos ao UNIBOOK", "@admin"));
	ListaUsuario *lista = new ListaUsuario(new ElementoListaUsuario(admin),(elementoPostAdmin));
	
	bool sair = false;
	string logado = "";
	int gerarconta = 0;
	opcaoMenu(lista,sair,logado,gerarconta);
	int atual = 0;
	while (!sair) {
		timeLine(logado);
		lista->MostrarPostUsuario(elementoPostAdmin);
		atual = _getch();
		if (atual == 13) {
			string temp=criarPost(logado,lista);
			if (temp != "exit")
				lista->InserirPost(new ElementoListaPost(new Post(temp, logado)));
		}
		if (atual == 27) {
			opcaoMenu(lista, sair, logado,gerarconta);
		}
		if (atual == 'x') {
			excluirPost(logado, lista);
		}
	}

	
	
	
	
	

	
}

#endif
