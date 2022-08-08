/*
Nome: Igor Prado Medeiros Martins
    Faça um algoritmo que leia dois valores inteiros e positivos X e Y. Calcule e mostre a potência de XY
utilizando a estrutura de repetição PARA.
Lista: 5
Exercício: 9
*/

#include <stdio.h>


int main() {

        int x,y,pot=1,i;

            printf("Digite o valor de x");
            scanf("%d",&x);
            printf("Digite o valor de y");
            scanf("%d",&y);

            for(i=1;i<=y;i++){
                    pot=pot*x;


            }
            printf("O resultado de x elevado a y eh %d", pot);









return 0;
}
