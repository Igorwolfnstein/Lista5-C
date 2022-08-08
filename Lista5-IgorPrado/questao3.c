/*
Nome: Igor Prado Medeiros Martins

    Faça um programa para informar quantos algarismos contém qualquer número inteiro digitado pelo
usuário.
Exemplo: Número informado pelo usuário: 25648
Resultado informado pelo programa: Quantidade de dígitos: 5

Lista: 5
Exercício: 3
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
