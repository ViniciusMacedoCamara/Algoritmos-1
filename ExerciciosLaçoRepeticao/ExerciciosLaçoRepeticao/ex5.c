//
//  ex5.c
//  ExerciciosLaçoRepeticao
//
//  Created by Vinicius Macedo on 18/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex5.h"

/*5) Elabore um algoritmo que leia um conjunto indeterminado de valores e informe, ao final, o maior e o menor valor lidos. O algoritmo deverá ser encerrado se o usuário digitar um valor negativo ou o valor 0.
 */

int ex5() {
    int valor, menor = 0, maior = 0;
    
    do {
        printf("\nDigite um numeor (0-fim): ");
        scanf("%d", &valor);
        
        if (valor > 0) {
            if (menor == 0) {
                menor = valor;
                maior = valor;
            } else {
                if (valor < menor) {
                    menor = valor;
                }
                if (valor > maior) {
                    maior = valor;
                }
            }
        }
        
    } while (valor > 0);
    
    if (menor != 0) {
        printf("\nMenor = %d", menor);
        printf("\nMaior = %d\n", maior);
    }
    
    return 0;
}
