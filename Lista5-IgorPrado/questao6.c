/*
Nome: Igor Prado Medeiros Martins
    Escreva um programa que efetue a soma de todos os n�meros �mpares que s�o m�ltiplos de tr�s e que
se encontram no conjunto dos n�meros de 1 at� 500.
Lista: 5
Exerc�cio: 6
*/

#include <stdio.h>


int main() {

        int num,acum;

        for(num=1;num<=500;num++){
        if(num%3==0 && num%2!=0){
                acum=acum+num;
            printf("%d  ",num);
        }

        }




            printf("A soma doss numeros impares e multiplos de 3 de 1 a 500 eh: %d",acum);

return 0;
}
