/*
Nome: Igor Prado Medeiros Martins
. Suponha que seu computador consiga executar somente operações de soma e subtração. Escreva um
programas que, dados dois números inteiros positivos não nulos a e b, calculem:
(a) O produto ab
(b) O quociente e o resto da divisão de a por b
Lista: 5
Exercício: 2
*/

#include <stdio.h>
#include<locale.h>





int main() {
     setlocale(LC_ALL,"Portuguese");
     float rest;
            int a,b,prod,quociente,contador=0,div;
           printf("Digite um número: ");
            scanf("%d",&a);
             printf("Digite um número: ");
            scanf("%d",&b);
        do{
    prod=prod+a;

    contador++;
         }while(contador!=b);
          printf("O produto é : %d",prod);
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



          printf("\nO quociente é: %d e o resto eh %f",contador,rest);





return 0;
}

