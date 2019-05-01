//
//  Ex4.c
//  Vetores
//
//  Created by Vinicius Macedo on 06/06/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  Faça um algoritmo que leia um vetor de 30 posições e informe quantos elementos são múltiplosde 2 e quantos são múltiplos de 3.

#include <stdio.h>
#define TAM 5

int ex4(){
    int i, multiplo2 = 0, multiplo3 = 0, v[TAM];
    
    printf("\nDigite os valores:\n ");
    for (i=0; i<TAM; i++) {
        printf("\n\tv[%i]= ",i);
        scanf("%d", &v[i]);
        
        if ((v[i]%2) == 0){
            multiplo2++;
        }
        if (v[i]%3 == 0) {
            multiplo3++;
        }
    }
    
    printf("\n %d multiplos de 2 \n", multiplo2);
    printf("\n %d multiplos de 3 \n", multiplo3);
    
    return 0;
}
