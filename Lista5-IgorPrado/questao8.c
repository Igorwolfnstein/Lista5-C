/*
Nome: Igor Prado Medeiros Martins
    Fa�a um programa em C para gerar os n primeiros termos da sequ�ncia:
1 1 2 3 5 8 13 21 34 55 89 . . .
Lista: 5
Exerc�cio: 8
*/

#include <stdio.h>


int main() {

        int num,acum,a=1,b=1,soma,max;



            printf("Digite um n�mero inteiro: ");
            scanf("%d",&max);

            if(max>0){
                printf("1");
            if(max==2){
                printf("1 1");
            }
            if(max>=3){
                    printf(" %d ",a);
            for(acum=3;acum<=max;acum++){
        soma=a+b;
        a=b;
        b=soma;


                printf(" %d ",soma);
			}
                }

			}else{
            printf("Termo invalido");
                   }

                return 0;
}

