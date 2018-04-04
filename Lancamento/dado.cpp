#include <iostream>
#include "dado.hpp"
#include <stdlib.h>
using std::cout;
using std::endl;

void Dados::lancamentoDado(){
	int res, i;
	
	srand (time(NULL));
	for(i = 0; i < vezes; i++){
		res = rand() % 6 + 1;
		cout << "O numero sorteado da tentativa " << i+1 << " eh: " << res << endl;
	}
}

