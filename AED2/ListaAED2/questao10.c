#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao10.h"

void entrada_10(char **senha){;
	printf("Entre com a senha: ");
    scanf("%s", senha);
}

void processamento_10(char **senha, int *res){
    char *senha_sistema = "LINGUAGEMC";
    *res = strcmpi(senha, senha_sistema);
}

void saida_10(int res){
    if(res == 0){
		printf("\nA senha esta correta.\n");
	}else{
		printf("\nA senha esta incorreta.\n");
	}
}

void questao10(void){
    char a;
    int resultado;

    entrada_10(&a);
    processamento_10(&a, &resultado);
    saida_10(resultado);
}
