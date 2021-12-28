//Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever 
//a tabuada de 1 a 10 do valor lido.

#include <stdio.h>
#include <locale.h>

int main(){
	
	int num, i=1;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		printf("Digite um número: ");
		scanf("%d", &num);
	}while(num < 1 || num >10);
	
	while (i <= 10){
		printf("\n%d X %d = %d", num, i, num*i);
		i++;
	}
	
	return(0);
}

