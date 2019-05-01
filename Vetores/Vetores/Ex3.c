//
//  Ex3.c
//  Vetores
//
//  Created by Vinicius Macedo on 06/06/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  Faça um programa que carregue um vetor com dez números reais, calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.

#include <stdio.h>
#define TAM 5

int ex3(){
    int i, menor = 0, soma = 0;
    float v[TAM];
    
    printf("\nDigite os valores:\n ");
    for (i=0; i<TAM; i++) {
        printf("\n\tv[%i]= ",i);
        scanf("%f", &v[i]);
        
        if (v[i] < menor){
            menor++;
        } else {
         soma = soma + v[i];
        }
    }

    printf("\nVoce digitou = %d numeroes menor que 0\n", menor);
    printf("\nA soma dos numeros positivos é de %d\n", soma);
    
    return 0;
}
