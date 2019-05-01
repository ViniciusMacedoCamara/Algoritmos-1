//
//  ex13.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 18/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex13.h"

/*Numa fábrica de peças, o salário base de um operário da linha de fabricação é de R$ 240,00. Além do salário base, o operário tem um adicional de produtividade baseado na quantidade de peças que ele fabrica por mês que é pago segundo o seguinte critério:
 • se o número de peças é inferior ou igual 500, não existe adicional de produtividade;
 • se o número de peças é superior a 500 e inferior ou igual a 750, o adicional de produtividade será de R$ 0,50 por peça fabricada acima de 500; e
 • se o número de peças for superior a 750, o adicional de produtividade será de R$ 0,75 por peça fabricada acima das 750.
 Desenvolva um algoritmo que permita entrar com o número de peças fabricadas por um operário e imprima seu salário.
 */

int ex13(){
    
    int pecas, adicional;
    
    printf("Entre com o numero de pecas: ");
    scanf("%d", &pecas);
    
    if (pecas > 0) {
        if (pecas <= 500) {
            printf("Seu salário é de R$ 250,00 e você não recebe adicional\n");
        }
        if (pecas > 500 && pecas <= 750) {
            pecas = pecas - 500;
            adicional = (pecas * 0.50) + 250;
            printf("Seu salário é de R$ %d\n", adicional);
        }
        if (pecas > 750) {
            pecas = pecas - 750;
            adicional = (pecas * 0.75) + 250;
            printf("Seu salário é de R$ %d\n", adicional);
        }
    } else {
        printf("Digite um numero maior que zero");
    }
    return 0;
}
