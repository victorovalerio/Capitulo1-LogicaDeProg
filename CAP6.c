//LISTA 6
#include <stdio.h>
#define ex5

#ifdef ex1
/*
	//___________________________________________________________________________________________________
		  1 - Escreva um programa que receba via teclado 2 numeros inteiros e
  			  imprima-os no video com o resultado das 4 operacoes aritmeticas.
	//___________________________________________________________________________________________________
*/

int loop = 1;
int main(){
float A, B;
	while(loop!= 0){
		printf("Digite um numero: ");
		scanf("%f", &A);
		printf("Digite outro numero: ");
		scanf("%f", &B);
		printf("Somando: %0.2f + %0.2f = %0.2f\n", A, B, (A + B));
		printf("Subtraindo: %0.2f - %0.2f = %0.2f\n", A, B, (A - B));
		printf("Multiplicando: %0.2f * %0.2f = %0.2f\n", A, B, (A * B));
		printf("Dividindo: %0.2f / %0.2f = %0.2f\n", A, B, (A / B));
		printf("\nchega? 0 pra sim: ");
		scanf("%i", &loop);
	}
}

#endif
//============================================================================================

#ifdef ex2
int main(){
int loop = 1;
int soma = 0;
float A, B, C;
	while(loop != 0){
		printf("Digite um numero: \n");
		scanf("%f", &C);
		printf("Digite outro numero: \n");
		scanf("%f", &B);
		A = C;
		A += B;
		printf("Somando fica %.0f\n", A);
		A = C;
		A-= B;
		printf("Subtraindo fica %.0f\n", A);
		A = C;
		A*= B;
		printf("Multiplicando fica %.0f\n", A);
		A = C;
		A/= B;
		printf("Dividindo fica %.2f\n", A);
	printf("\nchega? 0 pra sim: ");
	scanf("%i", &loop);
	}
}
#endif
//============================================================================================

//============================================================================================
#ifdef ex3
int main(){
int loop = 1;
int diaA =0, mesA=0, anoA=0;
int diaN=0, mesN=0, anoN=0;
int nascBi = 0, atualBi = 0;
int mesNPar = 0, mesAPar = 0;
int fevN = 0, fevA = 0;

	while(loop == 1){
        diaA =0, mesA=0, anoA=0;
        diaN=0, mesN=0, anoN=0;
        nascBi = 0, atualBi = 0;
        mesNPar = 0, mesAPar = 0;
        fevN = 0, fevA = 0;
        while(anoN == 0){
            printf("Digite o ano do seu nascimento: ");
            scanf("%i", &anoN);
            }

        if (anoN % 4 == 0){
            printf("VOCE NASCEU EM ANO BISSEXTO!!\n");
            nascBi = 1;
        }

        while(mesN < 1 || mesN >12){
            printf("Digite o mes do seu nascimento: ");
            scanf("%i", &mesN);
        }

        if (mesN == 1 ||mesN == 3 || mesN == 7 ||mesN == 8 ||mesN == 10 ||mesN == 12){
            printf("31 dias\n");
            mesNPar = 1;
        }
        if (mesN == 2){
            fevN =- 2;
			fevN += nascBi;
        }
        while(diaN < 1 || diaN > (30+fevN+mesNPar)){
        printf("Digite o dia do seu nascimento: ");
        scanf("%i", &diaN);
        }

       while(anoA == 0){
            printf("Digite o ano atual: ");
            scanf("%i", &anoA);
            }

        if (anoA % 4 == 0){
            printf("ESTAMOS EM ANO BISSEXTO!!\n");
            atualBi = 1;
        }

        while(mesA < 1 || mesA >12){
            printf("Digite o mes atual : ");
            scanf("%i", &mesA);
        }

        if (mesA == 1 ||mesA == 3 || mesA == 7 ||mesA == 8 ||mesA == 10 ||mesA == 12){
            printf("31 dias\n");
            mesAPar = 1;
        }

        if (mesA == 2){
            fevA = -2;
			fevA+= atualBi;
        }
		
        while(diaA < 1 || diaA > (30+fevA+mesAPar+atualBi)){
        printf("Digite o dia atual: ");
        scanf("%i", &diaA);
        }

        if( (diaA - diaN) < 1){
            diaA += (30 + mesAPar+mesNPar);
            mesA -= 1;
        }

        printf("TOMA \n");
        printf("Voce tem %i dias, %i meses e %i anos", diaA-diaN,mesA-mesN,anoA-anoN);

		printf("\nchega? 0 pra sim: ");
		scanf("%i", &loop);
	}
}
#endif

//============================================================================================
/*
	//___________________________________________________________________________________________________
		4 - Escreva um programa que receba via teclado uma data (dia, mes, e ano).
			Determine o dia da semana desta data.
	//___________________________________________________________________________________________________
*/
#ifdef ex4
int loop = 1;
int diaI, mesI, anoI;
int diaC, mesC, anoC;
int diaF, mesF, anoF;
int totalDias;

int main(){
	while(loop != 0){
		// 01/01/1961 foi domingo
		diaI = 01;
		mesI = 01;
		anoI = 1961;

		totalDias = 0;
		
		printf("Digite um dia: ");
		scanf("%i", &diaF);
		printf("Digite um mes: ");
		scanf("%i", &mesF);
		printf("Digite um ano: ");
		scanf("%i", &anoF);
		
		for(int i = anoI; i < anoF; i++){
		//	printf("%i", i);
			if(i %4 == 0){ 
				totalDias += 366; 
			//	printf(", totalDias += 366\n");
			}
			else { 
				totalDias += 365;
			//	printf(", totalDias += 365\n");
			}
		//	printf("restaram %i anos\n", anoF - i);
		}
	//	printf("totalDias apos contar os anos eh %i\n", totalDias);
		
	//	printf("Vamos contar os meses\n");
		
		for(int i = mesI; i < mesF; i++){
			if(anoF % 4 == 0 && i == 2) totalDias += 29;
			else if (i == 2) totalDias+= 29;
			else if(i == 1 ||i == 3 || i == 7 ||i == 8 ||i == 10 ||i == 12) totalDias += 31;
			else totalDias += 30;
	//		printf("o mes eh %i meses\n", mesF - i);
		}
		
	//	printf("totalDias apos contar os meses eh %i\n", totalDias);
		
		for(int i = diaI; i <= diaF; i++){
			totalDias++;
		}
	//	printf("totalDias apos contar os dias eh %i\n", totalDias);
		
		int diaDaSemana = (totalDias % 7);
			
		printf("Este dia eh: ");
		switch(diaDaSemana % 7) {
			case 0 : printf("Domingo");	break;
			case 1 : printf("Segunda");	break;
			case 2 : printf("Terca");	break;
			case 3 : printf("Quarta");	break;
			case 4 : printf("Quinta");	break;
			case 5 : printf("Sexta");	break;
			case 6 : printf("Sabado");	break;
		}
	

	printf("\nchega? 0 pra sim: ");
	scanf("%i", &loop);
	}
}
#endif
//============================================================================================
#ifdef ex5
int main() {
	int A, B;
	int loop = 1;
	while(loop!=0){
		printf("Digite um numero: ");
		scanf("%i",&A);
		printf("Digite um outro numero: ");
		scanf("%i",&B);
		printf("AND INTEIRO: ");
		printf("%i\n", A & B);
		printf("OR INTEIRO: ");
		printf("%i\n", A | B);
		printf("xOR INTEIRO: ");
		printf("%i\n", A ^ B);
		printf("AND HEX: ");
		printf("%X\n", A & B);
		printf("OR HEX: ");
		printf("%X\n", A | B);
		printf("xOR HEX: ");
		printf("%X\n", A ^ B);
    printf("\nchega? 0 p/ sim: ");
    scanf("%i", &loop);
    }
}
#endif