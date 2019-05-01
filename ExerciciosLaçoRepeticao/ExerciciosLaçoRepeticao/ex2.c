//
//  ex2.c
//  ExerciciosLaçoRepeticao
//
//  Created by Vinicius Macedo on 18/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex2.h"

/*2) Faça um algoritmo que solicite ao usuário 10 números e informe, ao final, a quantidade de números pares e de números ímpares digitados.
 */

int ex2() {

    int par=0, num, i;
    
    
    for(i=1; i<=10; i++){
        
        printf("Informe os numeros  ");
        scanf("%d", &num);
        
        if(num%2==0){
            par=par+1;
        }
        
    }
    printf("Pares: %d\n", par);
    printf("Impares: %d\n", 10-par);
    printf("\n");
    
    return 0;
}
