
//
//  ex8.c
//  ExerciciosLaçoRepeticao
//
//  Created by Vinicius Macedo on 18/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex8.h"

/*
 8) Faça um algoritmo que solicite um valor inteiro e informe, ao final, o fatorial deste valor.
 Obs.: por exemplo, o fatorial de 5 é 120, pois 5 x 4 x 3 x 2 x 1 = 120.
 */

int ex8() {
    
    int fat, num;
    
    printf("\nDigite um numero ");
    scanf("%d", &num);
    
    for (fat = 1; num > 1; num = num - 1) {
        fat = fat * num;
    }
    
    printf("\nO fatorial é: %d\n", fat);
    
    return 0;
}
