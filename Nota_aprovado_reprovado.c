/* Em uma classe de 20 alunos, dadas as notas deles, apresente-as em ordem decrescente e, ao lado delas, se o aluno está 
aprovado ou reprovado, considerando que um aluno está aprovado se obteve uma nota maior do que ou igual a 6 e reprovado se 
obteve nota menor do que 6.*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	int i = 0, j = 0, menor = 0;
	float  notas[20], aux = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
    for(i = 0; i < 20; i++){
        printf("Digite a nota do %d° aluno(a): ", i+1);
        scanf("%f", &notas[i]);
    }
	
	for(i = 0; i < 20; i++){		
		menor = i;
			
		for(j = i + 1; j < 20; j++){
			
			if(notas[j] < notas[menor]){
				menor = j;
			}
		}
		
		if (i != menor){	
		
			aux = notas[i];
			notas[i] = notas[menor];
			notas[menor] = aux;
		}
	}
		
	printf("\nNotas dos Alunos(a) em Ordem Decrescente:  ");
	for(i = 19; i >= 0; i--){
		
		if (notas[i] >= 6){
			printf("\nNota do aluno(a): %.2f - Resultado: Aprovado", notas[i]);
		}
		else{
			printf("\nNota do aluno(a): %.2f - Resultado: Reprovado", notas[i]);
		}
	}
	
	return(0);
}
