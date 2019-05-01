//
//  ex8.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 04/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex8.h"

int ex8() {
    
    float altura, pesoHomem, pesoMulher;
    char sexo;
    
    printf("Qual seu sexo? (m/f) ");
    scanf("%c", &sexo);
    printf("Qual sua altura? ");
    scanf("%f", &altura);

    
    if (sexo == 'm') {
        pesoHomem = 72,7 * altura - 58;
        printf("Seu peso ideal é %.2f\n", pesoHomem);
    } else {
        pesoMulher = 62,1 * altura - 44,7;
        printf("Seu peso ideal é %.2f\n", pesoMulher);
        printf("!\n");
    }
    
    return  0;
}
