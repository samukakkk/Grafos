#include <stdio.h>
#include <stdlib.h>

int main(){

    long long int num = 100, i, soma = 0, qtd = 0;
    int comprova = 0;

    while(num <= 100000){

        for(i = 2; (i < num) && (comprova == 0); i++){

            if(num % i == 0){

                comprova ++;

            }           

        }

        if(comprova == 0){

            soma = soma + num;
            qtd++;

        }

        num++;

        comprova = 0;

    }

    printf("\n soma dos numeros primos: %lld", soma);
    printf("\n quantidade de numeros primos: %lld", qtd);

    printf("\n");

    return 0;

}