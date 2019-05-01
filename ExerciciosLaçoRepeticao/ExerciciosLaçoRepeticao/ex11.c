//
//  ex11.c
//  ExerciciosLaçoRepeticao
//
//  Created by Vinicius Macedo on 18/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex11.h"

/*
 11
 */

int ex11() {
    
    int pos, primeiro=1, segundo=1, proximo, i;
    
    printf("\Qual posicao deseja? ");
    scanf("%d", &pos);

    if (pos>0) {
        if (pos>2) {
            for (i=3; i<=pos; i++) {
                proximo = primeiro + segundo;
                primeiro = segundo;
                segundo = proximo;
            }
        }
        printf("\nO numero da %d posicao é %d \n", pos, segundo);
    }
    return 0;
}
