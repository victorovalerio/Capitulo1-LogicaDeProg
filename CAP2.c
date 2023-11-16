#define ex5
//=========================================================================================================================
#ifdef ex1
#include<stdio.h>

int main(){
	/*
	1 - As ligacoes telefonicas são cobradas pela sua duracao. O sistema registra os
    instantes em que a ligacao foi iniciada e concluida.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.
	*/
	int iH,iM, iS;
	int oH, oM, oS;
	int H, M, S;
	int loop = 1;
	while(loop){
		printf("DIGITE O TEMPO INICIAL EM HORAS...\n");
		scanf("%i", &iH);
		printf("DIGITE O TEMPO INICIAL EM MINUTOS...\n");
		scanf("%i", &iM);
		printf("DIGITE O TEMPO INICIAL EM SEGUNDOS...\n");
		scanf("%i", &iS);

		printf("DIGITE O TEMPO FINAL EM HORAS...\n");
		scanf("%i", &oH);
		printf("DIGITE O TEMPO FINAL EM MINUTOS...\n");
		scanf("%i", &oM);
		printf("DIGITE O TEMPO FINAL EM SEGUNDOS...\n");
		scanf("%i", &oS);

		H = iH - oH;
		M = iM - oM;
		S = iS - oS;
	
	
		//......................TRATAMENTO DE ERROS...........................

		//	MODULO
		if (H<0) H *= (-1);	
		if (M<0) M *= (-1);
		if (S<0) S *= (-1);

		//	LIMITE DE MINUTO É 60
		if(M >= 60){
			H += (M/60);
			M = M % 60;
		}
		//	LIMITE DE SEGUNDO É 60
		if(S >= 60){
			M += (S/60);
			S %= 60;
		}
		
		printf("\n A CHAMADA FOI ENCERRADA APOS %ih%im%is\n",H,M,S);
		printf("SE QUISER ENCERRAR APERTA 0");
		scanf("%i", &loop);
	}
}
#endif
//=========================================================================================================================
#ifdef ex2
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	/*
	2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
		pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
		comando if-else.
	*/
	
	srand(time(0));
	char entrada;
	int min, max , tentativa;
	
	int loop = 1;
	while(loop){
		srand(time(0));
		entrada = 'a';
		min = 1, max = 100;


		printf("\nPENSA NUM NUMERO ENTRE 1 E 99 E EU VOU TENTAR ADIVINHAR, DEMORO?\n");
		while(entrada != '=')
		{
		tentativa = (rand() %(max - min)) + min;	// NUMERO ALEATORIO COM MAXIMO E MINIMO;
		printf("\nPOR ACASO O NUMERO É %i\n", tentativa);
		scanf(" ");
		scanf("%c", &entrada);
		if (entrada == '>') min = tentativa;
		else if (entrada == '<') max = tentativa;		
		else if (entrada == '=') printf("\n\nNAO ACREDITO!!!!!!\n\n");
		else printf("?\n");
		}
		printf("\nENTAO O NUMERO ERA %i\n", tentativa);
		printf("SE QUISER ENCERRAR APERTA 0: ");
		scanf("%i", &loop);
	}
	
	printf("EH ISSO AI, ATEH A PROXIMA\n");
}
#endif
//=========================================================================================================================
#ifdef ex3
#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
 	
	/*
 	3 - Reescreva o programa do exercicio anterior agora utilizando o comando switch.
   		Conte o n. de tentativas e imprima o resultado no video.
	*/
	
	srand(time(0));
	char entrada = 'a';
	int min, max, tentativa;
	int numeroTentativas;
	int loop = 1;
	
	while(loop){
		
		srand(time(0));
		entrada = 'a';
		min = 1, max = 100;
		numeroTentativas = 0;
		printf("\nPENSA NUM NUMERO ENTRE 1 E 99 E EU VOU TENTAR ADIVINHAR, DEMORO?\n");

		while(entrada != '='){
			tentativa = (rand() %(max - min)) + min;	// NUMERO ALEATORIO COM MAXIMO E MINIMO;
			printf("\nPOR ACASO O NUMERO É %i\n", tentativa);
			numeroTentativas++;
			scanf(" ");
			scanf("%c", &entrada);
			switch (entrada)
				{
				case '>' :
					min = tentativa;
					break;

				case '<' : 
					max = tentativa;
					break; 

				case '=' : 
					printf("\nNAO PODE SER!!!!!!!!!!!!!!!!\n");
					break;
				default :
					printf("\n?\n VOCE NAO RESPONDEU, EU NAO VOU CONTAR ESSA TENTATIVA. tentativa--");
					tentativa--;
				}
			}

			printf("\nENTAO O NUMERO ERA %i\n", tentativa);
			printf("EU ACERTEI EM %i TENTATIVAS!!!\n", numeroTentativas);
			printf("\nSE QUISER ENCERRAR APERTA 0: ");
			scanf("%i", &loop);
	}
	printf("EH ISSO AI, ATEH A PROXIMA\n");
	
}
#endif
//=========================================================================================================================
#ifdef ex4
#include<stdio.h>
	/*
	4-	Receba via teclado a distancia em km e a quantidade de litros de gasolina
		consumidos por um carro em um percurso.
		Calcule o consumo em km/l e escreva uma mensagem de acordo com a tabela
		abaixo:
		CONSUMO (km/l) MENSAGEM
		menor que 8    Venda o carro!
		entre 8 e 14   Economico!
		maior que 14   Super economico!
	*/

int main(){
	int km;
	int l;
	int loop = 1;
	
	while(loop){
		printf("DIGITE A QUANTIDADE DE KM PERCORRIDOS\n");
		scanf("%i", &km);

		printf("DIGITE A QUANTIDADE DE L CONSUMIDOS NESSE PERCURSO\n");
		scanf("%i", &l);

		if(km/l < 8) printf("VENDA O CARRO!!!!\n");
		else if (km/l > 14) printf ("SUPER ECONOMICO\n");
		else printf("ECONOMICO\n");
		printf("\nSE QUISER ENCERRAR APERTA 0: ");
		scanf("%i", &loop);
	}
}
#endif
//=========================================================================================================================
#ifdef ex5
#include<stdio.h>
	/*
	5 - Escreva um programa que receba via teclado numeros inteiros positivos.
		Quando o numero digitado for negativo o programa deve parar e calcula a
		media dos valores positivos digitados.
	*/

int main(){
	int entrada;
	float final = 0;
	int media = 0;
	int loop = 1;
	
	while(loop){
	media = 0;
	final = 0;
	printf("\nVAI DIGITANDO NUMERO, EU VOU CALCULAR A MEDIA DOS NUMEROS QUE VOCE COLOCAR, QUANDO O NUMERO DIGITADO FOR NEGATIVO ACABOU\n");
	while(1){
		printf("\nDigite um numero inteiro E positivo\n");
		scanf("%i", &entrada);
		if (entrada < 0)break;
		final += entrada;
		media++;
	}

	if(media > 0){
		final /= media;
		printf("A MEDIA DEU %.2f\n", final);
	}else{
	printf("MEDIA NEGATIVA\n");
	}

	printf("\nSE QUISER ENCERRAR APERTA 0: ");
	scanf("%i", &loop);
	}

}

#endif