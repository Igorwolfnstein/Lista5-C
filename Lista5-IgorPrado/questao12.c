/*
Nome: Igor Prado Medeiros Martins
    Ana tem 1,10m e cresce 2 centímetros por ano, enquanto Beatriz tem 0,80m e cresce 3 centímetros
por ano. Escreva um programa que calcule e imprima quantos anos serão necessários para que Beatriz
seja maior que Ana (Utilize a estrutura while). Além disso, indique ao final a altura Ana e a altura
de Beatriz

Lista: 5
Exercício: 12
*/

#include<stdio.h>

int main (){
    float ana=110,bia=80,ano=0;

    while(bia<=ana){
        bia=bia+3;
        ana=ana+2;
        ano=ano+1;
    }

    printf("%.0f anos \ate bia ser maior que ana",ano);
    printf("\nana tera %.2fcm de altura",ana);
    printf("\nbia tera %.2fcm de altura",bia);



return 0;
}
