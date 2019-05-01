//
//  ex7.c
//  ExerciciosLaçoRepeticao
//
//  Created by Vinicius Macedo on 18/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex7.h"

/*
7) Faça um algoritmo que gere, automaticamente, a tabuada dos valores de 1 a 10. Por exemplo, 1 x 1 = 1, 1 x 2 = 2, ... 1 x 10 = 10, 2 x 1 = 1, ..., 10 x 10 = 100.
 */

int ex7() {
    
    int i, j;
    
    for (i=1; i<=10; i++) {
        printf("\nTabuada do %d: ", i);
        for (j=1; j<=10; j++) {
            printf("\n\t %d * %d = %d", i, j, i * j);
        }
    }
    
    return 0;
}
