/*
Nome: Igor Prado Medeiros Martins
    Escreva um programa que leia um inteiro positivo n e imprima um tri�ngulo de n linhas, constitu�do
por n�meros com o seguinte formato:
(Para n=5)
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1

Lista: 5
Exerc�cio: 4
*/

#include <stdio.h>


int main() {

        int num,i,cont;

        do{
            printf("Digite um numero;");
            scanf("%d",&num);
          }while(num<=0);

            for(cont=num;cont>=1;cont--){
                for(i=cont;i>=1;i--){
                printf("%d",i);

                                    }
            printf("\n");
            }






return 0;
}
