/*
Nome: Igor Prado Medeiros Martins
    Fa�a um programa que leia um n�mero inteiro positivo n�o nulo n e imprima n linhas com o seguinte
formato (exemplo para n = 6):
1
2
3
4
5
6
Lista: 5
Exerc�cio: 5
*/

#include <stdio.h>


int main() {

        int num,i,cont;

        do{
            printf("Digite um numero;");
            scanf("%d",&num);
          }while(num<=0);

            for(cont=1;cont<=num;cont++){
                printf("%d\n",cont);
                for(i=1;i<=cont;i++){
                printf(" ");

                                    }

            }






return 0;
}
