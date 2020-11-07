/* Armazenar informacoes de veiculos
- No maximo 10 veiculos
marca do veiculo
modelo - 
ano de fabricacao
placa (formato XXX-YYYY; onde X denota as letras e Y denota os numeros da placa).
===========Funcionalidades===========================
-Listar os veiculos cadastrados;
-Inserir um novo veiculo;
-Listar os veiculos filtrando-se por ano de fabricacao;
-Listar os veiculos com o ano de fabricacao acima de um certo valor especificado pelo usuario. - Listar os veiculos filtrando-se pelo modelo.

Obs: O sistema devera armazenar os veiculos ordenados pelo ano de fabricacao, ou seja, 
ao inserir um novo veiculo, este deve ser inserido em ordem crescente de ano de fabricacao.

Funcoes: 
- insert
- list
- listByYear
- listByFilter

- populate

*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //colocar acentuacao no prompt
#include <stdbool.h>
#include <string.h>

//Structs
//Chamado aqui de dados heterog�neos

//Vari�vel auxiliar de �ndice
int i=0;
/*Criando a struct vehicle*/
struct vehicle{
	char brand[50];		//Marca do carro
	char model[50];		//modelo do carro
	int year;			//Ano de fabrica��o
	char plate[8];		//Placa do carro
};

struct vehicle veiculo[10];	//Criando um array de structs 

bool insert(void);				//prototipando  a fun��o para inser��o de um novo ve�culo
bool list(void);				//prototipando a funcao para listagem dos veiculos


void main(void) {				//Fun��o main

	insert();					//Chamada da rotina de inser��o de novo ve�culo
	list();

}//main

bool insert(void){				//fun��o para inser��o de um novo ve�culo
	//	Looppara a insercao de 10 veiculos
	for (i=0;i<10;i++){

		printf ("\n==== Cadastro de Ve�culo ====\n");
		
		printf ("Fabricante: ");
		scanf("%s%*c", &veiculo[i].brand);
		
		printf("Modelo: ");
		//fflush stdin para ler o teclado e fgets() para atribuir na string
		fflush(stdin);
		fgets(veiculo[i].model,50,stdin);
		
		printf("Ano: ");
		scanf("%d", &veiculo[i].year);
		
		printf("Placa (formato XXX-YYYY) : ");
		//fflush stdin para ler o teclado e fgets() para atribuir na string
		fflush(stdin);
		fgets(veiculo[i].plate,9,stdin);
	}
	return (0);
}

bool list(void){
	printf("\n === IMPRIMINDO ===\n");
	for (i=0;i<10;i++){

		printf("===== Veiculo %d =====",i+1);
		printf("\n Fabricante : %s",veiculo[i].brand);
		printf("\n Modelo : %s",veiculo[i].model);
		printf("\n Ano : %d",veiculo[i].year);
		printf("\n Placa : %s",veiculo[i].plate);

		getch();
	}
	return (0);
}




