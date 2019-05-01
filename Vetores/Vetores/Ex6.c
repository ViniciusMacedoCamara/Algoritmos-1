//
//  Ex6.c
//  Vetores
//
//  Created by Vinicius Macedo on 06/06/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include <stdio.h>
#define TAM 5

int ex6(){
    int i, maior = 0, v[TAM];
    
    printf("\nDigite os valores do vetor 1:\n ");
    for (i=0; i<TAM; i++) {
        printf("\n\tv[%i]= ",i);
        scanf("%d", &v[i]);
        
    }
    for (i=0; i<TAM; i++) {
        if(v[i] > v[0]) maior++;
    }
    
    printf("\nNúmero de elementos maiores que %d é %d\n",v[0], maior);
    
    return 0;
}
