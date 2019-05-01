//
//  trab7.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 25/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "trab7.h"

/*
 7) Uma fruteira está vendendo frutas com a seguinte tabela de preço:
 
                Até 5Kg    Acima de 5Kg
 Morangos   R$ 2,50 /kg    R$ 2,20 /kg
 Maçãs      R$ 1,80 /kg    R$ 1,50 /kg
 
 Se um cliente comprar acima de 8kg de frutas ou o total a pagar ultrapassar a R$ 25,00, ele ainda recebe um desconto de 10% sobre o valor total. Escreva um programa que leia a quantidade em kg de morangos e maças comprados e determine o total a pagar.
 */

int trab7(){
    
    float morangoKg, macaKg, kg, soma;
    
    printf("Quantos kg's de morango foram adquiridos? ");
    scanf("%f", &morangoKg);
    printf("Quantos kg's de maca foram adquiridos? ");
    scanf("%f", &macaKg);

    
    kg = morangoKg + macaKg;
    
    printf("KG %.2f\n", kg);
    
    if (kg <= 5 ) {
        morangoKg = morangoKg * 2.50;//3
        macaKg = macaKg * 1.80;//1 7,20
        soma = morangoKg + macaKg;
        printf("Soma %.2f\n", soma);
    } else if (kg > 5 && kg < 8) {
        morangoKg = morangoKg * 2.20;//6 - 13,2 15,4
        macaKg = macaKg * 1.50;//1 - 1,5
        soma = morangoKg + macaKg;
        printf("Soma %.2f\n", soma);
    } else if (kg >= 8) {
        morangoKg = morangoKg * 2.20;//9,2 - 20,24
        macaKg = macaKg * 1.50;//4,7 - 7,05
        soma = (morangoKg + macaKg) * 0.9;
        printf("Soma %.2f\n", soma);
    }
    
    printf("\n");
    
    return 0;
}
