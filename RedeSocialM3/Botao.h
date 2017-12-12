#ifndef BOTAO_H
#define BOTAO_H
#include <conio.h>
#include <string>
#include <iostream>

using namespace std;
void botao(int palavra, int tamanho) {
	if (tamanho == 0) {
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
	else {
		cout << "\xC9";
		for (int x = 0; x < tamanho; x++) {
			cout << "\xCD";
		}
		if (palavra < 10)
			cout << "\xBB" << endl << "\xBA" << "0" << palavra << "\xBA" << endl << "\xC8";
		else
			cout << "\xBB" << endl << "\xBA" << palavra << "\xBA" << endl << "\xC8";
		for (int x = 0; x < tamanho; x++) {
			cout << "\xCD";
		}
		cout << "\xBC" << endl;
	}
}
void botao(string palavra, int tamanho) {
	if (tamanho == 0) {
		tamanho = palavra.length();
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
	else {
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
}

#endif