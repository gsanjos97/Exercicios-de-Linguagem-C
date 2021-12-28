//Programa que substitui uma letra da palavra

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	
	char nome[20], l1, l2;
	int i=0;
	
	printf("Digite o nome: ");
	fflush(stdin);
	gets(nome);
	
	printf("Substituir a letra: ");
	fflush(stdin);
    l1=getchar();
    
    printf("Nova letra: ");
	fflush(stdin);
    l2=getchar();
	
	while(nome[i]!='\0'){
		if(nome[i]==l1){
			nome[i]=l2;
		}
		i++;
	}
	
    printf ("Nome Atualizado: %s \n\n", nome);
    system("pause");
}


