// RedeSocialM3.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "UNIBOOK.h"
using namespace std;

int main()
{	
	int x, i;
	while (!true) {
		x = _getch();
		i = _getch();
		cout << x << "\t" << i;
	}
	Unibook();
    return 0;
}

