/*
Nome: Igor Prado Medeiros Martins
    9. Fa�a um algoritmo que leia dois valores inteiros e positivos X e Y. Calcule e mostre a pot�ncia de XY
utilizando a estrutura de repeti��o PARA.
10. Repita o exerc�cio anterior mas utilizando a estrutura de repeti��o ENQUANTO.

Lista: 5
Exerc�cio: 10
*/

#include <stdio.h>


int main() {

        int x,y,pot=1,i=1;

            printf("Digite o valor de x");
            scanf("%d",&x);
            printf("Digite o valor de y");
            scanf("%d",&y);

            while(i<=y){
                    i++;
                    pot=pot*x;
            }



            printf("O resultado de x elevado a y eh %d", pot);









return 0;
}
