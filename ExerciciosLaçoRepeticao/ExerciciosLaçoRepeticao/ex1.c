//
//  ex1.c
//  ExerciciosLaçoRepeticao
//
//  Created by Vinicius Macedo on 18/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex1.h"

// 1) Faça um algoritmo que leia 10 valores inteiros e mostre a sua soma.

int ex1() {
    int valor, soma = 0;
    
    for (int i; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &valor);
        
        soma = soma + valor;
    }
    printf("%d\n", soma);
    
    return 0;
}
