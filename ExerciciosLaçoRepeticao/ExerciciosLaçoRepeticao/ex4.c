//
//  ex4.c
//  ExerciciosLaçoRepeticao
//
//  Created by Vinicius Macedo on 18/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex4.h"

/*4) Considerando que a média de um aluno é formada por 3 notas, faça um algoritmo que solicite as notas dos alunos e informe a média de cada um dos 20 alunos desta turma.
 */

int ex4() {
    
    int aluno = 0, nota1, nota2, nota3, media;
    
    do {
        printf("\nDigite a primeira nota do aluno %d: ", aluno);
        scanf("%d", &nota1);
        printf("\nDigite a segunda nota do aluno %d: ", aluno);
        scanf("%d", &nota2);
        printf("\nDigite a terceira nota do aluno %d: ", aluno);
        scanf("%d", &nota3);
        
        media = (nota1 + nota2 + nota3) / 3;
        
        printf("\nA media do aluno %d é %d: \n", aluno, media);
        
        aluno ++;
    } while (aluno < 20);
    
    return 0;
}
