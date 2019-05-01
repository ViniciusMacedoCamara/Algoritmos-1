//
//  Exemplo_Vetor.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 23/05/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "Exemplo_Vetor.h"

int exemploVetor(){
    
    int i, num[10];
    
    for (i=0; i<10; i++) {
        printf("valor %d: ", i+1);
        scanf("%d", &num[i]);
    }
    
    printf("\nConteudo do vetor: ");
    for (i=0; i<10; i++) {
        printf("%d ", num[i]);
    }
    
    printf("\n");
    
    return 0;
    
}
