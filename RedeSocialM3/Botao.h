#ifndef BOTAO_H
#define BOTAO_H
#include <conio.h>
#include <string>
#include <iostream>

using namespace std;
void botao(int palavra) {
	int tamanho = 0;
	if (palavra>= 1000) {
		tamanho = 4;
	}
	else if (palavra>= 100) {
		tamanho = 3;
	}
	else if (palavra< 100) {
		tamanho = 2;
	}
	cout << "\xC9";
	for (int x = 0; x < tamanho; x++) {
		cout << "\xCD";
	}
	if (palavra < 10)
		cout << "\xBB" << endl << "\xBA" <<"0"<< palavra << "\xBA" << endl << "\xC8";
	else
		cout << "\xBB" << endl << "\xBA" << palavra << "\xBA" << endl << "\xC8";
	for (int x = 0; x < tamanho; x++) {
		cout << "\xCD";
	}
	cout << "\xBC" << endl;
}
void botao(string palavra) {
	int tamanho = palavra.length();
	cout << "\xC9";
	for (int x = 0; x < tamanho; x++) {
		cout << "\xCD";
	}
	cout << "\xBB" << endl << "\xBA" << palavra << "\xBA" << endl << "\xC8";
	for (int x = 0; x < tamanho; x++) {
		cout << "\xCD";
	}
	cout << "\xBC" << endl;
}
void botao_2(int palavra) {
	int tamanho = 0;
	if (palavra >= 1000) {
		tamanho = 4;
	}
	else if (palavra >= 100) {
		tamanho = 3;
	}
	else if (palavra< 100) {
		tamanho = 2;
	}
	cout << "\xDA";
	for (int x = 0; x < tamanho; x++) {
		cout << "\xC4";
	}
	if (palavra<10)
		cout << "\xBF" << endl << "\xB3" <<"0"<< palavra << "\xB3" << endl << "\xC0";
	else
		cout << "\xBF" << endl << "\xB3" << palavra << "\xB3" << endl << "\xC0";
	for (int x = 0; x < tamanho; x++) {
		cout << "\xC4";
	}
	cout << "\xD9" << endl;
}
void botao_2(string palavra) {
	int tamanho = palavra.length();
	cout << "\xDA";
	for (int x = 0; x < tamanho; x++) {
		cout << "\xC4";
	}
	cout << "\xBF" << endl << "\xB3" << palavra << "\xB3" << endl << "\xC0";
	for (int x = 0; x < tamanho; x++) {
		cout << "\xC4";
	}
	cout << "\xD9" << endl;
}
#endif