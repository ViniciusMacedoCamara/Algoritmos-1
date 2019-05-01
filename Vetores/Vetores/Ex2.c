//
//  Ex2.c
//  Vetores
//
//  Created by Vinicius Macedo on 06/06/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include <stdio.h>
#define TAM 5

int ex2(){
    int i;
    float v[TAM], soma = 0, media;
    
    printf("\nDigite os valores:\n ");
    for (i=0; i<TAM; i++) {
        printf("\n\tv[%i]= ",i);
        scanf("%f", &v[i]);
        
        soma = soma+v[i];
    }
    media = soma / TAM;
    printf("\nA media = %.2f\n", media);
    
    return 0;
}
