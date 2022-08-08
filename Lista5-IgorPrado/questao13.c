/*
Nome: Igor Prado Medeiros Martins

    Faça um programa que leia dois números reais e em seguida um caracter que representa um operador
aritmético de acordo com a tabela abaixo. O programa deve possibilitar ao usuário a escolha da
operação desejada, o resultado da operação e a volta para escolher outra operação. O programa
termina quando for escolhida a opção de saída (opção 0).
Caracter digitado Operação
’+’ a+b
’-’ a-b
’*’ a*b
’/’ a/b
’0’ Sair

Lista: 5
Exercício: 13
*/

#include <stdio.h>
int main()
{


float num1, num2, soma, subtracao, multplicacao, divisao ;
char op;

do{
printf( "Escreva a operacao: \n + para adicao \n - para subtracao \n * para multiplicacao \n / para divisao\nDigite 0 para sair" );
scanf( " %c" , &op );


        if('op'!=0){
printf("\nEscreva dois numeros :\n" );
scanf( "%f%f", &num1, &num2 );


soma= num1 + num2;
subtracao= num1 - num2;
multplicacao= num1 * num2;
divisao= num1 / num2;


switch( op )
{

    case '+' :

    printf("A soma eh %.2f", soma);

    break;

    case '-' :

    printf("A subtracao eh %.2f", subtracao);

    break;

    case '*' :

    printf( "A multiplicacao eh %.2f" , multplicacao );

    break;

    case '/' :

    printf( "A divisao eh %.2f" , divisao );

    break;

    default:
        printf( "Operacao invalida" );

}
       } else{
       printf("Programa finalizado");}
}while('op'!=0);//Tentei diversas vezes finalizar a repetição, utilizando while e dowhile, mas não consegui

return 0;
}
