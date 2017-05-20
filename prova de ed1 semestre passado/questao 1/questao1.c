void repeticao(Lista* li, struct cliente cl){

	int i;
	struct cliente cli = cl;

	i = buscar(li, cli.cpf);
	printf("\n\n%d\n\n", i);
	if(i != -1){
		for(i+1; i<li->qtd; i++){
			if(strcmp(cli.cpf, li->dados[i+1].cpf) == 0){
				remover_cliente(li, i+1);
				repeticao(li, cl);
			}
		}
	}else{
		return;
	}
}
