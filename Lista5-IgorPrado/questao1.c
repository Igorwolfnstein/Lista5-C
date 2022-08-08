/*
Nome: Igor Prado Medeiros Martins
    Escreva um algoritmo que leia um conjunto de 20 números inteiros e mostre qual foi o maior e o menor
valor fornecido.
Lista: 5
Exercício: 1
*/

#include <stdio.h>
#include<locale.h>





int main() {
     setlocale(LC_ALL,"Portuguese");
         int contador, num,maior,menor;

  printf("Digite um número;");
         scanf("%d",&num);
         menor=num;
         maior=num;
        do{
         printf("Digite um número;");
         scanf("%d",&num);

        if(num>maior){
            maior=num;
        }else{
        if(num<menor){
                menor=num;

        }

            contador++;



         }


         }while(contador<20);
          printf("O maior número é : %d",maior);
           printf("\nO menor número é ; %d",menor);



         return 0;
}
