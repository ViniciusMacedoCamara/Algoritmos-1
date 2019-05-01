//
//  ex6.c
//  ExerciciosLaçoRepeticao
//
//  Created by Vinicius Macedo on 18/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex6.h"

/*
 6) Faça um algoritmo que solicite um valor para o usuário, e gere a tabuada deste valor. Por exemplo, se o usuário informar o valor 2 deverá ser gerada a tabuada do número 2, variando de 0 a 10.
 */

int ex6() {
    
    int valor, j = 0, aux;
    
    printf("\nDigite um valor: ");
    scanf("%d", &valor);
    
    while (j < 10) {
        aux = valor * j;
        printf("%d x %d = %d\n", valor, j, aux);
        j ++;
    }
    
    return 0;
}
