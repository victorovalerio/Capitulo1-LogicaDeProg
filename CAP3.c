//LISTA 3
#include <stdio.h>
#define ex5

#ifdef ex1
    /*
        1 - Escreva um programa que receba um numero N via teclado. Escreva uma funcao
        que retorne a soma dos algarismos do resultado de N!. O resultado deve ser
        mostrado na funcao main().
        Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos e´ 2 + 4 = 6.
    */

int somaAlgarismos(int num)
{
    int algarismoSoma = 0;
    printf("\nA SOMA FICA: \"");
    while (num > 0)
    {
    algarismoSoma += (num % 10);
    printf("%i", num%10);
    printf("+");
    num /= 10;
    }
    printf(" = %i", algarismoSoma);
	return 0;
}
//______________________________________________________________________________________________
int main(){
    int loop = 1;
    while (loop)

    {
        int entrada;
        int fatorial = 1;
        printf("digitae\n");
		scanf(" ");
        scanf("%i", &entrada);
        while (entrada > 0)
        {
            fatorial*= entrada;
            entrada--;
        }
        printf("\nfatorial = %i", fatorial);
        printf("\nvamos somar os algarismos");
        somaAlgarismos(fatorial);
        printf("\nquer continuar? 1/0");
        scanf("%i", &loop);
	}
}

#endif

//_______________________________________________________________________________

#ifdef ex2
    /*
    2 - Escreva um programa que receba dois numeros inteiros e execute as seguintes
    funçoes:
    ok- Verificar se o numero digitado e' positivo ou negativo. Sendo que o valor de
      retorno sera' 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    ok- Se os 2 numeros sao positivos, retorne a soma dos N numeros existentes entre
      eles.
    - Se os 2 numeros sao negativos, retorne a multiplicacao dos N numeros existente
      entre eles.
    - Se 1. numero for positivo e o 2. negativo faca a divisao entre eles.
    */

    int checa(int x)
    {
        if (x > 0) return 1;
        else if (x < 0) return 0;
        else return -1;
    }
//_______________________________________________________________________________
    int somaDiferencas(int x, int y)
    {
    int somaRetornada = 0;
    int diferenca = x - y;
    for (int i = 1; i < diferenca; i++){
        somaRetornada += y + i;
        printf("%i + ", y+i);
        }
    printf(" = %i", somaRetornada);
    return somaRetornada;
    }
//_______________________________________________________________________________
    int multiplicaDiferencas(int x, int y)
    {
    int intRetornada = 1;
		
	if(x>y){
		for(int i = x; i > y; i--){
			intRetornada *= i;
		}
	}
	else if(y>x){
		for(int i = y; i > x; i--){
			intRetornada *= i;
		}
	} else printf("NAO HA DIFERENCA ENTRE OS NUMEROS");
    return intRetornada;
    }
//_______________________________________________________________________________
    float divisao(int x, int y)
    {
	float xF = x;
	float yF = y;
    return xF / yF;
    }
//_______________________________________________________________________________
int main()
{
    int a, b;
	int loop = 1;
    while (loop){
		printf("Digite um numero inteiro\n");
		scanf("%i", &a);
		printf("Digite outro numero inteiro\n");
		scanf("%i", &b);

		if ( checa(a)  == -1) printf("Voce nao vai a lugar nenhum escrevendo isso\n");
		else if ( checa(b)  == -1) printf("Voce nao vai a lugar nenhum escrevendo isso\n");
		else if(checa(a) && checa(b))
		{
				printf("\na eh + e b eh +\n");
				printf("NESSE CASO A INSTRUCAO EH SOMAR: \n");
				if (a>b) somaDiferencas(a,b);
				if (a<b) somaDiferencas(b,a);
		}

		 else if( checa(a) && !checa(b) )
		{
				printf("\na eh + e b eh -\n");
			 printf("%f",divisao(a,b));
		}


		 else if( !checa(a) && checa(b) )
		{
				printf("\na eh - e b eh +\n");
				printf("%f", divisao(a,b));
		}
		else if( !checa(a) && !checa(b) )
		{
				printf("\na eh - e b eh -\n");

				printf("NESSE CASO A INSTRUCAO EH MULTIPLICAR: \n");
				printf("%i",multiplicaDiferencas(a,b));

		}
		printf("\nquer continuar? 1/0");
		scanf("%i", &loop);
	}

}
#endif

//_______________________________________________________________________________

#ifdef ex3
 	/*
    3 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima os 4 resultados no video na funcao main().
    */
int Soma(int x, int y)
{
	return x + y;
}

int Subtrai(int x, int y)
{
	return x - y;
}

int Multiplica(int x, int y)
{
	return x * y;
}

float Divide(int x, int y)
{
	float xFloat = x;
	float yFloat = y;
	return xFloat / yFloat;
}

//_______________________________________________________________________________
int main()
{    
	int a, b;
	int loop = 1;
	
	while(loop){
		printf("Digite um numero inteiro\n");
		scanf("%i", &a);
		printf("Digite outro numero inteiro\n");
		scanf("%i", &b);
		int soma = Soma(a,b);
		int subtrai = Subtrai(a,b);
		int multiplica = Multiplica(a,b);
		float divide =  Divide(a,b);

		printf("1. SOMANDO FICA: %i\n", soma);
		printf("2. SUBTRAINDO FICA: %i\n", subtrai);
		printf("3. MULTIPLICANDO FICA: %i\n", multiplica);
		printf("4. ANTES DE DIVIDIR: A FUNCAO DEVOLVE UM FLOAT POR MOTIVOS DE NUMEROS MENORES QUE 1.\nMULTIPLICANDO FICA: %.2f\n", divide);
		printf("\nquer continuar? 1/0");
		scanf("%i", &loop);
	}
}

#endif
//_______________________________________________________________________________
#ifdef ex4
   
	/*
    
    4 - Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.
    
    */

	float Soma(float x, float y)
{
	return x + y;
}

float Subtrai(float x, float y)
{ 
	if (x<0) x = x * (-1);
	float z = x - y;
	if (z<0) z *= -1;
	return z;
}

float Multiplica(float x, float y)
{
	return x * y;
}

float Divide(float x, float y)
{
	float xFloat = x;
	float yFloat = y;
	
	if(x == 0) return yFloat;
	else return xFloat / yFloat;
}

//_______________________________________________________________________________
int main()
{   
	int loop = 1;
	int n = 1;
	float ntermo;
	float acumuloSoma;
	float acumuloSubtrai;
	float acumuloMultiplica;
	float acumuloDivide;
	

	while(loop){
		printf("programa resetado\n");
		n = 1;
		ntermo = 0;
		acumuloSoma = 0;
		acumuloSubtrai = 0;
		acumuloMultiplica = 1;
		acumuloDivide = 1;
	
		while(n){
			printf("Digite um numero inteiro\n");
			scanf("%f", &ntermo);
			acumuloSoma = Soma(ntermo,acumuloSoma);
			acumuloSubtrai = Subtrai(acumuloSubtrai,ntermo);
			acumuloMultiplica = Multiplica(ntermo,acumuloMultiplica);
			acumuloDivide =  Divide(acumuloDivide,ntermo);

			printf("1. SOMANDO FICA: %.0f\n", acumuloSoma);
			printf("2. SUBTRAINDO FICA: %.0f\n", acumuloSubtrai);
			printf("3. MULTIPLICANDO FICA:%.0f\n", acumuloMultiplica);
			printf("4. DIVIDINDO FICA: %.2f\n", acumuloDivide);
			printf("OUTRO TERMO? (1/0): ");
			scanf("%i", &n);
		}
	printf("QUER CONTINUAR? (1/0): ");
	scanf("%i", &loop);
	}
	printf("EH ISSO AI, ATEH A PROXIMA\n");
}
#endif
//________________________________________________________________________________________________________________
#ifdef ex5

	float Soma(float x, float y)
{
	return x + y;
}

float Subtrai(float x, float y)
{ 
	if (x<0) x = x * (-1);
	float z = x - y;
	if (z<0) z *= -1;
	return z;
}
float Multiplica(float x, float y)
{
	return x * y;
}

float Divide(float x, float y)
{	
	if(y == 0) return printf("NAO VOU DIVIDIR POR ZERO NAO VOU DIVIDIR POR ZERO NAO VOU DIV\n");
	else return x / y;
}
	/*
    5 - Escreva um programa que receba n valores inteiros via teclado na funcao main().
    Faca uma calculadora com as 4 operacoes aritmeticas.(utilize o comando switch).
    As operacoes aritmeticas devem ser funcoes. O resultado acumulado deve ser
    mostrado na funcao main().
    */
int main()
{
	int n;
	float valorAcumulado = 0;
	float termo;
	char decisao;
	int loop = 1;
	while(loop){
		printf("Digite a quantidade de termos\n");
		scanf("%i", &n);
		printf("Na logica desse programa existe uma variavel chamada valorAcumulado. Por motivos de conveniencia, na primeira execucao do exercicio ela tera: \n-valor 0 caso seja uma adicao ou subtracao.\n-valor 1 caso seja uma divisao ou multiplicacao\n");

		for(int i = 0; i < n ; i++){
			printf("Digite o valor do %io termo\n",i+1);
			scanf("%f", &termo);
			printf("Digite o que quer que aconteca com esse termo: \n\"+\" para somar. \"-\" para subtrair. \"*\" para multiplicar ou \"/\" para dividir");
			scanf(" ");
			scanf("%c", &decisao);


			switch(decisao){
					case '+' : {
						valorAcumulado = Soma(termo,valorAcumulado);
						break;
					}
					case '-' : {
						valorAcumulado = Subtrai(termo,valorAcumulado);
						break;
					}

					case '*' : {
						if (i == 0){
							if(valorAcumulado == 0){
								valorAcumulado = 1;
								valorAcumulado = Multiplica(termo,valorAcumulado);
								break;
							}
						}
						else {
							valorAcumulado = Multiplica(termo,valorAcumulado);
							break;
						}
					}

					case '/' : {
						if (i == 0){
							if(valorAcumulado == 0){
								valorAcumulado = 1;
								Divide(termo,valorAcumulado);
								break;
							}
						} else {
							valorAcumulado = Multiplica(termo,valorAcumulado);
							break;
						}
					}
				default : printf("ISSO NAO ERA UMA OPCAO, VOCE PERDEU ESSE TERMO. PROXIMO\n");
			}

			printf("O VALOR ACUMULADO AGORA É %.2f\n", valorAcumulado);

		}
		printf("Denovo? (1/0): ");
		scanf("%i", &loop);
	}
	printf("\nEH ISSO AI, ATEH A PROXIMA\n");
}
#endif