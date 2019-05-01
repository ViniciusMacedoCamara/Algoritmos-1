//
//  ex10.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 04/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex10.h"

/*
 Um hotel cobra R$ 50,00 a diária, e mais uma taxa de serviço. A taxa de serviço é calculada da seguinte forma:
 • R$ 4,00 por diária, se o número de diárias for maior que 10.
 • R$ 5,00 por diária, se o número de diárias for igual a 10.
 • R$ 8,50 por diária, se o número de diárias for menor que 10.
 Elabore um algoritmo que solicite a quantidade de dias que o hóspede ficou no hotel (diárias), calcule e imprima o valor a ser pago por este mesmo cliente.
 */

int ex10() {
    
    int diaria;
    float total;
    
    printf("Quantos dias de estadia? ");
    scanf("%d", &diaria);
    
    if (diaria > 10) {
        //R$ 4,00 por diária, se o número de diárias for maior que 10.
        total = (diaria * 4.00) + (diaria * 50.00);
        printf("Você deve pagar %.2f\n", total);
    } if (diaria == 10) {
        //R$ 5,00 por diária, se o número de diárias for igual a 10.
        total = (diaria * 5.00) + (diaria * 50.00);
        printf("Você deve pagar %.2f\n", total);
    } if (diaria < 10) {
        //R$ 8,50 por diária, se o número de diárias for menor que 10.
        total = (diaria * 8.50) + (diaria * 50.00);
        printf("Você deve pagar %.2f\n", total);
    }
    
    return  0;
}
