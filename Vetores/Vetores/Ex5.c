//
//  Ex5.c
//  Vetores
//
//  Created by Vinicius Macedo on 06/06/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. Exiba o vetor resultante.


#include <stdio.h>
#define TAM 5

int ex5(){
    int i, multiplo2 = 0, multiplo3 = 0, v[TAM], y[TAM], x[TAM];
    
    printf("\nDigite os valores do vetor 1:\n ");
    for (i=0; i<TAM; i++) {
        printf("\n\tv[%i]= ",i);
        scanf("%d", &v[i]);
        
    }
    printf("\nDigite os valores do vetor 2:\n ");
    for (i=0; i<TAM; i++) {
        printf("\n\ty[%i]= ",i);
        scanf("%d", &y[i]);
    }
    
    for (i=0; i<TAM; i++) {
        x[i] = v[i] * y[i];
        printf("\n\t %d * %d = %d",v[i], y[i], x[i]);
    }
    
    return 0;
}
