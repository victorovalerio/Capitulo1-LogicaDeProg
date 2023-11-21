//LISTA 4
#include <stdio.h>
#define ex5

#ifdef ex1
//___________________________________________________________________________________________________
    /*
		1 - Escreva um programa que receba um vetor de inteiros com tamanho 10 e o
			decomponha em dois outros vetores. Um tera´ as componentes de ordem impar 
			e o outro tera´ as componentes de ordem par.
			Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 9}, o programa
			deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3, 9}.
    */
//___________________________________________________________________________________________________
int vetorPrimario[10];
int vetorPar[5];
int vetorImpar[5];
int loop = 1;

int main(){
	while(loop!= 0){
			for(int i = 0; i <10; i++){
				printf("Digite o numero que sera armazenado em vetorPrimario[%i]: ", i);
				scanf("%i", &vetorPrimario[i]);
				if(i %2 ==0) vetorPar[i/2] = vetorPrimario[i];
				else vetorImpar[i/2] = vetorPrimario[i];
			}
			
			printf("\nO ARRAY PRIMARIO FICOU: \t");
				printf("[");
				for(int i = 0; i < 9; i ++){
					printf(" %i,",vetorPrimario[i]);
				}
				  printf(" %i ]\n",vetorPrimario[9]);
			
			printf("\nO ARRAY PAR FICOU: \t");
				printf("[");
				for(int i = 0; i < 4; i ++){
					printf(" %i,",vetorPar[i]);
				}
				  printf(" %i ]\n",vetorPar[4]);
		
			printf("\nO ARRAY IMPAR FICOU: \t");
				printf("[");
				for(int i = 0; i < 4; i ++){
					printf(" %i,",vetorImpar[i]);
				}
				  printf(" %i ]\n",vetorImpar[4]);
			
		printf("chega? 0 pra sim: ");
		scanf("%i", &loop);
	}
}

#endif
//============================================================================================

#ifdef ex2
//___________________________________________________________________________________________________
    /*
	2 - Escreva um programa que receba um vetor de inteiros com tamanho 10 e o 
		decomponha em dois outros vetores. Um tera´ as componentes de valor impar 
		e o outro tera´ as componentes de valor par. 
		Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 4} o
		programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2, 4}. 	
    */
//___________________________________________________________________________________________________

int vetorPrimario[10];
int vetorPar[10];
int vetorImpar[10];
int qtdNumerosPar = 0;	
int qtdNumerosImpar = 0;	
int loop = 1;

int main(){

while(loop!= 0){
	qtdNumerosPar = 0;	
	qtdNumerosImpar = 0;	
	for(int i = 0; i <10; i++){
		printf("Digite o numero que sera armazenado em vetorPrimario[%i]: ", i);
		scanf("%i", &vetorPrimario[i]);
		if(vetorPrimario[i] %2 ==0){
			vetorPar[qtdNumerosPar] = vetorPrimario[i];
			qtdNumerosPar++;
		} else{
			vetorImpar[qtdNumerosImpar] = vetorPrimario[i];
			qtdNumerosImpar++;
		}
	}
		
	printf("\nO ARRAY PRIMARIO FICOU: \t");
	printf("[");
				for(int i = 0; i < 9; i ++){
					printf(" %i,",vetorPrimario[i]);
				}
				  printf(" %i ]\n",vetorPrimario[9]);
	
	printf("\nO ARRAY PAR FICOU: \t");
	qtdNumerosPar--;
		printf("[");
				for(int i = 0; i < qtdNumerosPar; i ++){
					printf(" %i,",vetorPar[i]);
				}
				  printf(" %i ]\n",vetorPar[qtdNumerosPar]);
	
	
	printf("\nO ARRAY IMPAR FICOU: \t");
		qtdNumerosImpar--;
		printf("[");
				for(int i = 0; i < qtdNumerosImpar; i ++){
					printf(" %i,",vetorImpar[i]);
				}
				  printf(" %i ]\n",vetorImpar[qtdNumerosImpar]);
	
		printf("chega? 0 pra sim: ");
		scanf("%i", &loop);
	}
}
#endif

//============================================================================================

#ifdef ex3
 	
	/*	3 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
	 		que recebe os dados via teclado para esses 2 vetores.	
																	ok
				
			Usando o operador adicao "+", some os elementos de mesmo qtdRep dos 2 vetores e guarde o
	 		resultado em um 3o vetor.	ok
			
			Imprima na tela o qtdRep, os valores e o resultado
	 		dos 6 elementos dos vetores. ok
     */


//_______________________________________________________________________________
int vetorBiDi[2][3];

int loop = 1;

int main(){

while(loop!= 0){
	int soma = 0;
	
	for(int y = 0; y < 3; y++){
		for(int x = 0; x < 2; x++){
		printf("Digite o valor que sera interido em vetorBiDi[%i][%i]: ",x,y);
		scanf("%i", &vetorBiDi[x][y]);
		}
	}
	printf("Somando:\n");

	for(int y = 0; y < 3; y++){
		printf("[");
		for(int x = 0; x < 2; x++){
			printf(" %i ", vetorBiDi[x][y]);
			soma += vetorBiDi[x][y]; 
			}
		printf("] = %i \n", soma);
		soma = 0;
		}
		printf("chega? 0 pra sim: ");
		scanf("%i", &loop);
	}
}


#endif
//============================================================================================

#ifdef ex4
   
//_______________________________________________________________________________
	/*
	4 - Receba via teclado 10 valores inteiros e ordene por ordem crescente assim
		que sao digitados. Guarde-os em um vetor. Mostre ao final os valores 
		ordenados.
    */
//_______________________________________________________________________________
int valores[10],loop = 1, entrada, k;

int main(){

	while(loop!= 0){
		for(int i = 0; i < 9; i ++){
			valores[i] = 0;
		}
		for(int i = 0; i < 10 ; i++){
			printf("Digite um numero: ");
			scanf("%i", &entrada);

			for(int j = 0; j < 10; j ++){
				if (entrada < valores[j]){
					for(int k = 9; k > j; k--){
						valores[k] = valores[k-1];
						}
					valores[j] = entrada;
					j = 10;
				}else{
					valores[i] = entrada;
				}
			}
		}
		printf("[");
				for(int i = 0; i < 9; i ++){
					printf(" %i,",valores[i]);
				}
				  printf(" %i ]\n",valores[9]);
		
		printf("chega? 0 pra sim: ");
		scanf("%i", &loop);
	}
}
#endif

#ifdef ex5
//_______________________________________________________________________________

	/*
		5 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
			3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

					10        20        30        40        50
			12345678901234567890123456789012345678901234567890
			  int                 long                unsigned
						float               double
			  int                 long                unsigned
						float               double
			  int                 long                unsigned
						float               double
	*/
int vetorInt[3];
long vetorLong[3];
unsigned vetorUnsigned[3];
float vetorFloat[3];
double vetorDouble[3];
int loop = 1;
//_______________________________________________________________________________
int main(){
	while(loop!= 0){
		for(int i = 0; i < 3; i++){
			printf("\nvetorInt[%i]\n", i);
			printf("Digite um numero: ");
			scanf("%i", &vetorInt[i]);
		}

			for(int i = 0; i < 3; i++){
			printf("\nvetorLong[%i]\n", i);
			printf("Digite um numero: ");
			scanf("%ld", &vetorLong[i]);
		}
			for(int i = 0; i < 3; i++){
			printf("\nvetorUnsigned[%i]\n", i);
			printf("Digite um numero: ");
			scanf("%u", &vetorUnsigned[i]);
		}
		for(int i = 0; i < 3; i++){
			printf("\nvetorFloat[%i]\n", i);
			printf("Digite um numero: ");
			scanf("%f", &vetorFloat[i]);
		}
		for(int i = 0; i < 3; i++){
			printf("\nvetorDouble[%i]\n", i);
			printf("Digite um numero: ");
			scanf("%lf", &vetorDouble[i]);
		}
//________________PRINTANDO___________________________________________		
			for(int i = 0; i < 3; i++){
			printf("\nvetorInt[%i]: %i", i, vetorInt[i]);
		}

			for(int i = 0; i < 3; i++){
			printf("\nvetorLong[%i]: %ld", i, vetorLong[i]);
		}
			for(int i = 0; i < 3; i++){
			printf("\nvetorUnsigned[%i]: %u", i, vetorUnsigned[i]);
		}
		for(int i = 0; i < 3; i++){
			printf("\nvetorFloat[%i]: %f", i, vetorFloat[i]);
		}
		for(int i = 0; i < 3; i++){
			printf("\nvetorDouble[%i] %lf", i, vetorDouble[i]);
		}
		
	printf("\nchega? 0 pra sim: \n");
	scanf("%i", &loop);
	}
}
#endif