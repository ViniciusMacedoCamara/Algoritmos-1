//
//  ex2.c
//  aula11-04
//
//  Created by Vinicius Macedo on 11/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex2.h"
#include <stdio.h>

int ex2(){
    int n1,n2,soma,aux;
    printf("Digite dois numeros: ");
    scanf("%d %d,",&n1,&n2);
    if (n2<n1) {
        aux=n1;
        n1=n2;
        n2=aux;
    }
    soma=0;
    while (n1<=n2) {
        soma=soma+n1;
        n1++;
    }
    printf("\nA soma é: %d\n",soma);
    return 0;
}
