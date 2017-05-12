#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

Pilha* cria_pilha();

int main(){

	struct cliente c[8] = {{"Gustavo","15474588"},
                           {"Ricardo","154684"},
                           {"Bianca","157845325"},
                           {"Ana Alice","54326565"},
                     	   {"Teste","5452135"},
                     	   {"Teste2","45465454"},
                     	   {"Teste3","1546354"},
                     	   {"Teste4","454354554"}};


	Pilha* pi = cria_pilha();
	
	int i;
    for(i=0; i < 4; i++)
        inserir_cliente(pi, c[i]);	
	
	
	
	remover_cliente(pi);
	remover_cliente(pi);
	inserir_cliente(pi, c[6]);
	printf("\n\n\n");
	imprimir_pilha(pi);
	libera_pilha(pi);
	return 0;
}