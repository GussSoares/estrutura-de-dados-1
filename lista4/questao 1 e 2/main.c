#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

Lista* cria_lista();
Lista* remove_inicio(Lista* li);
Lista* remover_com_index(Lista* li, int index);
int inserir_com_index(Lista* li, struct cliente cl, int index);

int main(){

	struct cliente c[8] = {{"Gustavo","15474588"},
                           {"Ricardo","154684"},
                           {"Bianca","157845325"},
                           {"Ana Alice","54326565"},
                     	   {"Teste","5452135"},
                     	   {"Teste2","45465454"},
                     	   {"Teste3","1546354"},
                     	   {"Teste4","454354554"}};


	Lista* li = cria_lista();
	
	int i;
    for(i=0; i <= 4; i++)
        inserir_cliente(li, c[i], i);
	
	//inserir_cliente(li, c[5], 3);

	//printf("Busca: %d\n\n", buscar(li, "1546354"));
	
	remover_cliente(li, 3);
	imprimir_lista(li);
	libera_lista(li);
	return 0;
}