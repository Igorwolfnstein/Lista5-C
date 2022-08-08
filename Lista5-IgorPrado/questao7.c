/*
Nome: Igor Prado Medeiros Martins
        Escrever um algoritmo que leia um quantidade desconhecida de números e conte quantos deles estão
nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. A entrada de dados deve terminar quando
for lido um número negativo
Lista: 5
Exercício: 7
*/

#include <stdio.h>


int main() {

        int num,i,cont;

        do{
            printf("\nDigite um numero;");
            scanf("%d",&num);
                if(0<=num && num<=25){
                    printf("O numero digitado está no intervalo de 0 a 25");

                }else{
                if(26<=num && num<=50){
                    printf("O numero digitado está no intervalo de 26 a 50");
                }else{
                if(51<=num && num<=75){
                    printf("O numero digitado está no intervalo de 51 a 75");
                }else{
                if(76<=num && num<=100){
                    printf("O numero digitado está no intervalo de 76 a 100");

                }else(
                      printf("O numero nao esta nos intervalos "));


              } } } }while(num>=0);
                return 0;
}
