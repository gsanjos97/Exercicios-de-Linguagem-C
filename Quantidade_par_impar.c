//Ler 10 números e imprimir quantos são pares e quantos são ímpares.

#include <stdio.h>
#include <locale.h>

int main(){
	
	int i, num, par, impar;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i = 0; i < 10; i++){
		
		printf("Digite o número: ");
		scanf("%d", &num);
		
		if (num % 2 == 0){
			par++;
		}
		else{
			impar++;
		}
	}
	
	printf("\nA quantidade de números pares são: %d", par);
	printf("\nA quantidade de números impares são: %d", impar);
	
	return(0);
	
}
