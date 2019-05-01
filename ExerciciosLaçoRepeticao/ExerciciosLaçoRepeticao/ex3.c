//
//  ex3.c
//  ExerciciosLaçoRepeticao
//
//  Created by Vinicius Macedo on 18/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex3.h"

/*3) Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.
 */

int ex3() {
    
    float chico = 1.50, ze = 1.10;
    int cont;
    
    while (chico > ze) {
        chico = chico + 0.02;
        ze = ze + 0.03;
        cont ++;
    }
    
    printf("Chico %f, Ze %f, Cont %d\n", chico, ze, cont);
    
    return 0;
}
