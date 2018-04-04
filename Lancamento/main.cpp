#include <iostream>
#include "dado.hpp"
#include <stdlib.h>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]){
    	Dados dado;
    	dado.vezes = atoi(argv[1]);
    	dado.lancamentoDado();


	return 0;
}
