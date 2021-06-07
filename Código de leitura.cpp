#include<stdio.h>
#include<iostream>

//variaveis
char f1[] = "Nome";

//estruturas
struct aluno {
	char nome[20];
	double notas[3];
	double media;
};

//funcões
void imprimir(struct aluno);
double calcMedia(double n1, double n2, double n3); 

//principal
int main (){
	
	//variaveis do programa
//	char nome[20];
//	double notas[3];
//	double media;
	
	struct aluno aluno1;
	
	printf("Digite as informacoes sobre o Aluno:\n");
	
	printf("Digite o nome : ");
	gets(aluno1.nome);

	for(int n=0;n<3;n++){
		printf("Digite o valor da %d nota : ",n+1);
		scanf("%lf",&aluno1.notas[n]);
	}
	
	aluno1.media = calcMedia(aluno1.notas[0],aluno1.notas[1],aluno1.notas[2]);
	
	imprimir(aluno1);
}

//funções
void imprimir (struct aluno aluno1) {
	printf("\n[%-20s]-[nota1]-[nota2]-[nota3]-[Media]\n", f1);
	printf("[%-20s]-",aluno1.nome);
	for(int n=0;n<3;n++){printf("[%5.2f]-", aluno1.notas[n]);}
	printf("[%5.2f]", aluno1.media);
}


double calcMedia(double n1, double n2, double n3){
	return (n1 + n2 + n3) / 3;
}



