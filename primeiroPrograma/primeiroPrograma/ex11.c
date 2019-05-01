//
//  ex11.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 04/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex11.h"

/*
 Desenvolva um algoritmo que calculo a conta de água. O custo da água varia de acordo com o tipo de consumidor (residencial, comercial ou industrial). O cálculo obedece as seguintes regras:
 Residencial: R$5,00 de taxa mais R$0,05 por m3 gastos;
 Comercial: R$500,00 para os primeiros 80 m3 gastos mais R$ 0,03 por m3 gasto excedendo os 80 m3; e
 Industrial: R$800,00 para os primeiros 100 m3 gastos mais R$ 0,04 por m3 gasto excedendo os 100 m3.
 */

int ex11() {
    
    int consumidor, gasto;
    float total;
    
    printf("Qual seu tipo de consumidor? \n");
    printf("Digite 1 para Residencial\n");
    printf("Digite 2 para Comercial\n");
    printf("Digite 3 para Industrial\n");
    scanf("%d", &consumidor);
    printf("Quantos metros cúbicos foram gastos? \n");
    scanf("%d", &gasto);
    
    if (consumidor == 1) {
        //Residencial: R$5,00 de taxa mais R$0,05 por m3 gastos;
        total = (gasto * 0.05) + 5.00;
        printf("Você deve pagar %.2f\n", total);
    } if (consumidor == 2) {
        //Comercial: R$500,00 para os primeiros 80 m3 gastos mais R$ 0,03 por m3 gasto excedendo os 80 m3;
        if (gasto < 80) {
            total = 500.00;
            printf("Você deve pagar %.2f\n", total);
        } else {
            total = (gasto * 0.03) + 500.00;
            printf("Você deve pagar %.2f\n", total);
        }
    } if (consumidor == 3) {
        //Industrial: R$800,00 para os primeiros 100 m3 gastos mais R$ 0,04 por m3 gasto excedendo os 100 m3.
        if (gasto < 100) {
            total = 800.00;
            printf("Você deve pagar %.2f\n", total);
        } else {
            total = (gasto * 0.04) + 800.00;
            printf("Você deve pagar %.2f\n", total);
        }
    }
    
    return  0;
}
