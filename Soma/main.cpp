#include <iostream>
#include "somaDados.hpp"
#include <stdlib.h>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]){
    	Soma dado;
    	dado.vezes = atoi(argv[1]);
    	dado.somaDado();


	return 0;
}
