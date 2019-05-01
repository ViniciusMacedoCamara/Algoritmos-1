//
//  ex1.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 04/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex1.h"

int ex1() {
    int valor;
    
    printf("Digite um número: ");
    scanf("%d", &valor);
    
    if (valor >= 0) {
        printf("%d é positivo\n", valor);
    } else {
        printf("%d é negativo\n", valor);
    }
    
    return 0;
}
