/*
Nome: Igor Prado Medeiros Martins
    Fa�a um programa que imprime a quantidade de n�meros pares entre dois n�meros inteiros positivos
n�o nulos quaisquer fornecidos pelo usu�rio. Obs: Considere os n�meros como parte do intervalo.

Lista: 5
Exerc�cio: 11
*/

#include <stdio.h>


int main() {


 int a,b,i,par=0;


        printf("escreva o menor numero do intervalo:");
        scanf("%d", &a);

        printf("escreva o maior numero do intervalo:");
        scanf("%d", &b);
    if (b>a){
        if (a>0 && b>0){
        for (i=a;i<=b;i++){
        if (i%2==0){
            par=par+1;
        }
    }
      printf("esse intervalo tem: %d numeros pares", par);
    }else{
    printf("os numero tem q ser positivos e nao nulos");
    }
    }else {
    printf("digite o menor numero primeiro");
    }









return 0;
}
