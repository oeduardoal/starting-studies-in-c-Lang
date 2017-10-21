#include<stdio.h>
#define TM 5

/*
*    @author Eduardo Almeida <oeduardoal@gmail.com>
*    @problem
*          Faça um algoritmo que leia um vetor S[20] e uma variável A. A seguir, mostre o produto da variável A pelo vetor
*/

int main()
{
    int K[5],N[5];
    int c,i,atual,prox,ante = 0;
    
    // zerar
    for(c = 0 ; c < 5; c++){
        K[c]   = 0;
        N[c]   = 0;
    }
         
    for(c = 0 ; c < TM; c++){
        printf("Escreva o numero para: %d (Primeiro Vetor) ...... ",c);
        scanf("%d",&K[c]);
    }

    for(c = 0 ; c < TM ; c ++){
        // São ímpares
        N[c] = K[c];
        if(K[c] % 2 == 1){
            for( i = c; i < TM ; i++){
                if(K[i] % 2 == 0){
                    
                    atual = K[c];
                    
                    K[c] = K[i];
                    
                    K[i] = atual;

                    i = 5;
                }
            }
        }
    }

    printf("\n\n");

    printf("\tNovo array:\n\n");
    for(c = 0 ; c < TM ; c ++){
        printf("\t[%d] = %d\n",c, K[c]);
    }

    printf("\n\n");
    return 0;
}
