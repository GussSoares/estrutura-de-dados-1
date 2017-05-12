#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

Fila* cria_fila();

int main(){

	struct cliente c[8] = {{"Gustavo","15474588"},
                           {"Ricardo","154684"},
                           {"Bianca","157845325"},
                           {"Ana Alice","54326565"},
                     	   {"Teste","5452135"},
                     	   {"Teste2","45465454"},
                     	   {"Teste3","1546354"},
                     	   {"Teste4","454354554"}};


	Fila* fi = cria_fila();
	
	int i;
    for(i=0; i < 4; i++)
        inserir_cliente(fi, c[i]);
	
	//

	remover_cliente(fi);
	inserir_cliente(fi, c[5]);
	imprimir_fila(fi);
	libera_fila(fi);
	return 0;
}