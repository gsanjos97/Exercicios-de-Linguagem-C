//Ler 10 n�meros e imprimir quantos s�o pares e quantos s�o �mpares.

#include <stdio.h>
#include <locale.h>

int main(){
	
	int i, num, par, impar;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i = 0; i < 10; i++){
		
		printf("Digite o n�mero: ");
		scanf("%d", &num);
		
		if (num % 2 == 0){
			par++;
		}
		else{
			impar++;
		}
	}
	
	printf("\nA quantidade de n�meros pares s�o: %d", par);
	printf("\nA quantidade de n�meros impares s�o: %d", impar);
	
	return(0);
	
}
