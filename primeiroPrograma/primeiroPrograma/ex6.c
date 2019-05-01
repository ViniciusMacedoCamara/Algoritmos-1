//
//  ex6.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 04/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex6.h"

int ex6() {
    
    float valor, porcentagem, menor, maior, total;
    
    printf("Qual valor do produto? ");
    scanf("%f", &valor);
    printf("Qual valor da porcentagem? ");
    scanf("%f", &porcentagem);

    if (porcentagem <= 25) {
        //acrescenta a porcentagem ao valor e exiba o valor final
        menor = (valor * porcentagem) / 100 ;
        total = valor + menor;
        printf("O valor final do produto é de: %.2f\n --- %.2f", total, menor);
    } else {
        //diminua a porcentagem do valor e exiba o valor final
        maior = (valor * porcentagem)  / 100 ;
        total = valor - maior;
        printf("O valor final do produto é de: %.2f\n", total);
    }
    
    return  0;
}
