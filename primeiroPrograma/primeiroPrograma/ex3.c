//
//  ex3.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 04/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex3.h"

int ex3() {
    int valor1, valor2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &valor1);
    printf("Digite o segundo numero: ");
    scanf("%d", &valor2);
    
    if (valor2 > valor1) {
        printf("O segundo número deve ser menor que o primeiro\n");
    } else {
        if (valor1 % valor2 == 0) {
            printf("São multiplos\n");
        } else {
            printf("Não são multiplos\n");
        }
    }
    
    return 0;
}
