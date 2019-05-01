//
//  trab1.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 25/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "trab1.h"

/*1) Escreva um programa que recebe o primeiro termo, a razão e o número de termos e mostra uma PA (Progressão Aritmética) e uma PG (Progressão Geométrica) construída com esses valores dados.
 */

int trab1(){
    
    int primeiroTermo, razao, nTermos, i=0, progA, progG, aux;
    
    printf("Entre com a primeira termo: ");
    scanf("%d", &primeiroTermo);
    printf("Entre com a razao: ");
    scanf("%d", &razao);
    printf("Entre com o numero de termos desejados: ");
    scanf("%d", &nTermos);

    progA = primeiroTermo;
    progG = primeiroTermo;
    
    if (nTermos <= 0) {
        printf("Digite um numero maior que 0\n");
    } else {
        printf("Progressao Aritmetica\n");
        while (i < nTermos) {
                printf("%d, ", progA);
                progA = progA + razao;
            i++;
        }
        i = 0;
        printf("\nProgressao Geometrica\n");
        while (i < nTermos) {
            printf("%d, ", progG);
            progG = progG * razao;
            i++;
        }
        printf("\n");
    }
    
    printf("\n");

    return 0;
}
