//
//  ex5.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 04/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex5.h"

int ex5() {
    
    float nota1, nota2, media, aula, frequencia;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Quantas aulas o aluno teve? ");
    scanf("%f", &aula);
    printf("Quantas aulas o aluno esteve presente? ");
    scanf("%f", &frequencia);
    
    media = (nota1 + nota2) / 2;
    frequencia = (aula * frequencia) / 100;
    
    if (media >= 6 && frequencia >= 75.00) {
        printf("Aprovado %.2f de média e %.2f%% de frequencia\n", media, frequencia);
    } else {
        printf("Reprovado %.2f de média e %.2f%% de frequencia\n", media, frequencia);
    }
    
    return  0;
}
