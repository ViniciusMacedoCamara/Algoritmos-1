//
//  trab9.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 02/05/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "trab9.h"

int trab9(){

    int i, j, num[4], aux;
    
    //for para pedir os 4 valores e incrementar na variavel i para como array de num
    for(i = 1; i <= 4; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d", &num[i]);
    }
    
    //
    for(i = 1; i <= 3; i++){
        for(j = i + 1; j <= 4; j++){
            if(num[j] > num[i])
            {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }
    
    printf("\nOs numeros em ordem decrescente sao:\n\n");
    
    for(i = 1; i <= 4; i++){
        printf("%d ", num[i]);
    }
    
    printf("\n");
    
    return 0;
    
}


