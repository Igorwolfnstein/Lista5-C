/*
Nome: Igor Prado Medeiros Martins

    Fa�a um programa para informar quantos algarismos cont�m qualquer n�mero inteiro digitado pelo
usu�rio.
Exemplo: N�mero informado pelo usu�rio: 25648
Resultado informado pelo programa: Quantidade de d�gitos: 5

Lista: 5
Exerc�cio: 3
*/

#include <stdio.h>


int main() {

        int num,i,cont=0;


            printf("Digite um numero;");
            scanf("%d",&num);

            while(num!=0){
                cont++;
                num=num/10;

            }
            printf("A quantidade de algarismos eh: %d",cont);








return 0;
}
