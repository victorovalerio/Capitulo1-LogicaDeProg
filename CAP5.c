//LISTA 5
#include <stdio.h>
#define ex5

#ifdef ex1
char A[10];
char B[10];
//___________________________________________________________________________________________________
    /*
		1 - Receba 2 string de ate 10 caracteres via teclado na funcao main(). Faça uma
			funcao para compara-las e retorne como resultado se são IGUAIS 1 ou se
			DIFERENTES 0 para a funcao main(). Imprima o resultado na funcao main().
			(Declare os vetores como variavel global) (nao pode usar funcao de biblioteca)
    */
//___________________________________________________________________________________________________
int comparaArrays(){
	int resultado = 0;
	for(int i = 0; i < 10; i++){
	if(A[i] == B[i]) resultado = 1; else resultado = 0;
	}
	return resultado;
}
//___________________________________________________________________________________________________
int loop = 1;

int main(){
int compara;
	while(loop!= 0){
		compara = 0;
		printf("Vamos armazenar o array A\n");
		for(int i = 0; i < 10; i++){
			printf("Digite o A[%i]: ", i);
			scanf(" ");
			scanf("%c", &A[i]);
		}
		printf("Vamos armazenar o array B\n");
		for(int i = 0; i < 10; i++){
			printf("Digite o B[%i]: ", i);
			scanf(" ");
			scanf("%c", &B[i]);
		}
		compara = comparaArrays();
		printf("O retorno da função comparaArrays eh %i\n", compara);

		printf("O ARRAY \"A\" FICOU:");	
		
			printf("[");
			for(int i = 0; i < 9; i ++){
				printf(" %c,",A[i]);
			}
			   printf(" %c ]\n",A[9]);
		
		printf("O ARRAY \"B\" FICOU:");	
			printf("[");
			for(int i = 0; i < 9; i ++){
				printf(" %c,",B[i]);
			}
			   printf(" %c ]\n",B[9]);
	printf("\nchega? 0 pra sim: \n");
	scanf(" ");
	scanf("%i", &loop);
	}
}

#endif
//============================================================================================

#ifdef ex2
//___________________________________________________________________________________________________
    /*
		2 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
			e imprima-os no video no seguinte formato:(Declare os 5 vetores como variaveis
			globais)

					10        20        30        40        50
			12345678901234567890123456789012345678901234567890
			  nome1                                   nome5
						nome2               nome4
								  nome3
    */
//___________________________________________________________________________________________________

int loop = 1;
char A[8];
char B[8];
char C[8];
char D[8];
char E[8];

int main(){
	while(loop!= 0){
		printf("Digite um nome de ateh 7 caracteres\n");
		scanf("%s", &A[0]);
		printf("Digite outro nome de ateh 7 caracteres\n");
		scanf("%s", &B[0]);
		printf("Digite mais um nome de ateh 7 caracteres\n");
		scanf("%s", &C[0]);
		printf("Digite mais outro nome de ateh 7 caracteres\n");
		scanf("%s", &D[0]);
		printf("Digite mais um outro nome de ateh 7 caracteres\n");
		scanf("%s", &E[0]);

	printf("PRONTO PRONTO CHEGA\n");
	printf("%s%s%s%s%s", A,B,C,D,E);

	printf("\nchega? 0 pra sim: \n");
	scanf("%i", &loop);
	}
}
#endif

//============================================================================================

#ifdef ex3
 	
//_______________________________________________________________________________
	/*
		3 - Escreva um programa que receba uma string na funcao main(). Faca uma funcao que
			calcula o comprimento de uma string recebida via teclado. Mostre o valor do
			comprimento na funcao main().
			(Declare o vetor como variavel global) (nao pode usar funcao de biblioteca)
			
     */
//_______________________________________________________________________________
int loop = 1;
char A[100];

int tamanhoDaString(){
	int i = 0;
	while(A[i] != 0){
	i++;
	}
	return i;
}

int main(){
	int tamanho = 0;
	while(loop!= 0){
	printf("Escreve uma string ai, eu vou ver se acerto o tamanho\n");
	scanf(" ");
	scanf("%s",&A[0]);
	printf("VOCE DIGITOU \"%s\"\n", A);
	tamanho = tamanhoDaString();
	printf("O tamanho da string eh %i", tamanho); 
	printf("\nchega? 0 pra sim: \n");
	scanf("%i", &loop);
	}
}
#endif
//============================================================================================

#ifdef ex4
   
//_______________________________________________________________________________
	/*
		4 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
			para letras maiusculas. (nao pode usar funcao de biblioteca)
    */
//_______________________________________________________________________________
int loop = 1;
char A[10];
char B[10];
int hex;

int main(){
	while(loop!= 0){
	printf("Digite uma cadeia de ateh 10 caracteres e eu vou converter em caracteres maiusculos sem usar funcao de biblioteca: ");
	scanf("%s", &A[0]);
	for(int i = 0; i < 10; i++){
		hex = A[i];
		if(97 <= hex && hex <= 123){ 
			hex -= 32;
			A[i] = hex;
		}
	}
		printf("%s",A);
			
	printf("\nchega? 0 pra sim: \n");
	scanf("%i", &loop);
	}
}
#endif

#ifdef ex5
//_______________________________________________________________________________

	/*
		5 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
		para letras minusculas. (nao pode usar funcao de biblioteca)
	*/
//_______________________________________________________________________________
int loop = 1;
char A[10];
char B[10];
int hex;

int main(){
	while(loop!= 0){
	printf("Digite uma cadeia de ateh 10 caracteres e eu vou converter em caracteres minusculos sem usar funcao de biblioteca: ");
	scanf("%s", &A[0]);
	for(int i = 0; i < 10; i++){
		hex = A[i];
		if(65 <= hex && hex <= 90){ 
			hex += 32;
			A[i] = hex;
		}
	}
		printf("%s",A);
			
	printf("\nchega? 0 pra sim: \n");
	scanf("%i", &loop);
	}
}
#endif