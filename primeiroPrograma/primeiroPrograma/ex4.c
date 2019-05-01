//
//  ex4.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 04/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex4.h"

int ex4() {
    
    int n50, n10, n5, valor;
    
    printf("Qual quantia que deseja sacar? ");
    scanf("%d", &valor);
    
    n50 = valor / 50;
    valor = valor % 50;
    n10 = valor / 10;
    valor = valor % 10;
    n5 = valor / 5;
    valor = valor % 5;
    
    if (valor % 5 == 0) {
        printf("\nSaldo disponível");
        printf("\n%d notas de 50, %d notas de 10, %d notas de 5 e %d notas de 1\n", n50, n10, n5, valor);
    } else {
        printf("Saldo indisponivel, digite outro valor\n");
    }
    
    return  0;
}
