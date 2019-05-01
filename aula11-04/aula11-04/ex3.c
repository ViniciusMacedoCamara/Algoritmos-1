//
//  ex3.c
//  aula11-04
//
//  Created by Vinicius Macedo on 11/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex3.h"

int ex3(){
    int n1,n2;
    do {
        printf("\nDigite o primeiro numero (0-fim): ");
        scanf("%d", &n1);
        if (n1>0) {
            printf("\nDigite o segundo numero: ");
            scanf("%d", &n2);
            printf("\nO produto é %d \n", n1*n2);
        }
    } while (n1!=0);
    return 0;
}
