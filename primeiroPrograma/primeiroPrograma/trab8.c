//
//  trab8.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 02/05/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "trab8.h"

int trab8(){

    int numero, contador = 0;
    
    do {
        printf("Digite um número maior que 1: ");
        scanf("%d", &numero);
    } while (numero <= 1);
    
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }
    if (contador == 2) {
        printf("O numero %d é primo", numero);
    } else {
        printf("O numero %d nao e primo", numero);
    }
    
    printf("\n");
    
    return 0;
}

