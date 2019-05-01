//
//  trabX.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 25/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "trab5.h"

/*
 5) Escreva um programa que leia dois números inteiros positivos e, através da escolha/opção do usuário, calcular e mostrar o mmc (mínimo múltiplo comum) ou o mdc (máximo divisor comum) dos números dados.
*/

int trab5(){
    
    int n1, n2, choice, i, aux, mmc, resto;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Deseja calcular o MMC(1) ou o MDC(2) ? ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        for (i = 1; i <= n2; i++) {
            aux = n1 * i;
            if ((aux % n2) == 0) {
                mmc = aux;
                i = n2 + 1;
            }
        }
        printf("MMC %d\n", mmc);
    } else {
        do {
            resto = n1 % n2;
            
            n1 = n2;
            n2 = resto;
            
        } while (resto != 0);
        
        printf("MDC %d\n", n1);
    }
    
    printf("\n");
    
    return 0;
}
