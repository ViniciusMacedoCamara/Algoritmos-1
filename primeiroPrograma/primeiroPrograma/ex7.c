//
//  ex7.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 04/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex7.h"

/*
Uma prefeitura abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Faça um algoritmo que leia o salário bruto e o valor da prestação e informe se o empréstimo pode ou não ser concedido.*/
//O valor máximo da prestação não poderá ultrapassar 30% do salário bruto

int ex7() {
    
    float salarioBruto, prestacao, emprestimo;
    
    printf("Qual valor do salario bruto? ");
    scanf("%f", &salarioBruto);
    printf("Qual valor da prestacao? ");
    scanf("%f", &prestacao);
    
    emprestimo = salarioBruto * 0.30;
    
    if (prestacao <= emprestimo) {
        printf("Emprestimo concedido!\n");
    } else {
        printf("Emprestimo negado!\n");
    }
    
    return  0;
}
