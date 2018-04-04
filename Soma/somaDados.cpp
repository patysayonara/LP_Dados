#include <iostream>
#include "somaDados.hpp"
#include <stdlib.h>
using std::cout;
using std::endl;

void Soma::somaDado(){
	int res, i, cont = 0;

	srand (time(NULL));
	for(i = 0; i < vezes; i++){
		res = rand() % 6 + 1;
		cout << "O numero sorteado da tentativa " << i+1 << " eh: " << res << endl;
		cont += res;
	}
	cout << "A soma dos numeros sorteados eh: " << cont << endl;
}

