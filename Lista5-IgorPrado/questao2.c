/*
Nome: Igor Prado Medeiros Martins
. Suponha que seu computador consiga executar somente opera��es de soma e subtra��o. Escreva um
programas que, dados dois n�meros inteiros positivos n�o nulos a e b, calculem:
(a) O produto ab
(b) O quociente e o resto da divis�o de a por b
Lista: 5
Exerc�cio: 2
*/

#include <stdio.h>
#include<locale.h>





int main() {
     setlocale(LC_ALL,"Portuguese");
     float rest;
            int a,b,prod,quociente,contador=0,div;
           printf("Digite um n�mero: ");
            scanf("%d",&a);
             printf("Digite um n�mero: ");
            scanf("%d",&b);
        do{
    prod=prod+a;

    contador++;
         }while(contador!=b);
          printf("O produto � : %d",prod);
    contador=1;
            do{


dividendo=a;
divisor=b;
rest=0;
quociente=0;
int mult;

while(divisor>dividendo){
        mult=dividendo+dividendo;

    quociente++;

}








    contador++;
         }while(quociente);



          printf("\nO quociente �: %d e o resto eh %f",contador,rest);





return 0;
}

