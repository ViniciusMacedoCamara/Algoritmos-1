//
//  ex2.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 04/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex2.h"

int ex2() {
    int valor;
    
    printf("Digite um número: ");
    scanf("%d", &valor);
    
    if (valor % 2 == 0) {
        printf("%d é par\n", valor);
    } else {
        printf("%d é impar\n", valor);
    }
    
    return 0;
}
