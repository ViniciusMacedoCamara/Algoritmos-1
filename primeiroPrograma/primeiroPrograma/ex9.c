//
//  ex9.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 04/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex9.h"

/*
 Faça um algoritmo que solicite ao usuário um ano e informe, ao final,se é um ano bissexto ou não. Obs: anos bissextos são dados pelas regras (segundo o calendário Gregoriano):
     i) De 4 em 4 anos é ano bissexto.
     ii) De 100 em 100 anos não é ano bissexto.
     iii) De 400 em 400 anos é ano bissexto.
     iv) Prevalecem as últimas regras sobre as primeiras.
 A título de curiosidade, o ano de 1900 foi o último ano a ser aplicada a regra ii (não é bissexto). A próxima vez será em 2100.
 */

int ex9() {
    
    int ano;
    
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    if (ano % 4 == 0 && ano % 100 != 0 && ano % 400 != 0) {
        printf("É uma ano bissexto\n");
    } else {
        printf("Não é um ano bissexto\n");
    }
    
    return  0;
}
