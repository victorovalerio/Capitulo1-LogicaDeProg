#include <stdio.h>
#include <stdbool.h> 
#define ex5

 //=======================================================================================================================
#ifdef ex5
int main(){
    int numM = 0;
    int numL = 0;
    printf("Digite um numero que pra gente encontrar um multiplo\n"); 
    scanf("%i", &numM);
    printf("Digite um numero limite pra comecar a procurar um numero que seja multiplo\n");
    scanf("%i", &numL);
    
    while((numL % numM) != 0)
    {
    printf("Ainda nao\n");
    numL++;   
    printf("%i\n",numL);
    }
    printf("\n\tOOOBA\n");
    printf("O numero multiplo é %i", numL);
printf("\nFIM\n");   
}
#endif
 //=======================================================================================================================
#ifdef ex4
int main(){
    int numOg = 0;
    int numInv = 0;
    bool exec = true;
    int dec = 0;
    
    printf("4 - Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar outro número formado pelos dígitos invertidos do número lido.\n");
    while(exec)
    {
      while (numOg < 100 || numOg > 999)
      {
        printf("\nDigite um numero natural de 3 digitos\n");
        scanf("%i", &numOg);
      }

        printf("O NUMERO INVERTIDO FICOU: ");
            for (int i = 0; i < 3; i++){
                 numInv *= 10;
                 numInv += (numOg % 10);
                 if (numOg % 10 == 0) printf("0");
                 numOg /= 10;
            }
        printf("%i",numInv);
        printf("\nSE QUISER PARAR DIGITA \"1\"\n");
        scanf("%i", &dec); 
        if (dec == 1) exec = false;
        
        else {
        numOg = 0;
        numInv = 0;
        }
    }

    
printf("\nFIM\n");   
}
#endif
 //=======================================================================================================================
#ifdef ex3 
int main(){
    float numeroFloat = 0;
    int numeroInt = 0;
    printf("Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma variável auxiliar.\n");
    printf("Digite um numero inteiro\n");
    scanf("%i", &numeroInt);
	numeroFloat = numeroInt;
    printf("Esse numero em float ficou: %f\n", numeroFloat);
    printf("\nFIM\n");   
}
#endif
 //=======================================================================================================================
#ifdef ex2
int main(){
    int dado = 1234567890;
    float dadoFloat = 1234567890.0;
    short dadoShort = 12345;
    short dadoShort2 = 67890;
    printf("Digitei a sequencia 123567890 pra agilizar\n");
    printf("\nFicou assim: \n%i",dado);
    printf("\nCom float:\n");
    printf("%.0f\n", dadoFloat);
    printf("\nCom short:\n");
    printf("%i e %i\n", dadoShort,dadoShort2);
}
#endif
 //=======================================================================================================================
#ifdef ex1
int main(){
    int tempoS;
    int tempoH;
    int tempoM;
    int tempoF;

    printf("Digite um tempo em segundos e eu vou te falar ele em horas minutos e segundos\n");

    scanf("%i", &tempoS);
    
    tempoH = tempoS / 3600;

    tempoM = tempoS - (3600 * tempoH);

    tempoM /= 60;
    
    tempoF = tempoS - ((3600 * tempoH) + (60*tempoM));

    printf("voce digitou \"%i segundos\"\n", tempoS);
    
    printf("\tTUDO JUNTO FICA: %i:%i:%i\n",tempoH,tempoM,tempoF);

}
#endif // ex1
