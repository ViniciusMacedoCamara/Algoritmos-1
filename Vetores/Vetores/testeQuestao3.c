//
//  testeQuestao3.c
//  Vetores
//
//  Created by Vinicius Macedo on 27/06/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include <stdio.h>
#define TAM 4

int teste3(){
    
    int i = 0, j = 0, k = 0, v[TAM], v2[TAM], uniao[10], intersecao[10], count, aux;
    
    //--------- VETOR 1 -----------
    for (i=0; i<TAM; i++) {
        do {
            printf("Digite os valores para o primeiro array em ordem: ");
            scanf("%d", &v[i]);
            if (i == 1) {
                if (v[i] < v[i-1]) {
                    printf("Numero menor que o anterior, por favor faça na ordem\n");
                }
            }
        } while (i>0 && v[i] < v[i-1]);
        
    }
    //--------- VETOR 2 -----------
    for (j=0; j<TAM; j++) {
        do {
            printf("Digite os valores para o segundo array em ordem: %d", j);
            scanf("%d", &v2[j]);
            if (j > 0) {
                if (v2[j] < v2[j-1]) {
                    printf("Numero menor que o anterior, por favor faça na ordem\n");
                }
            }
        } while (j>0 && v2[j] < v2[j-1]);
    }
    
    //
    
    count = 0;
    // Laço para o array1
    for(i=0; i<TAM; i++){
        
        // atribui como falso (no caso não deve ir para a interseção até que seja provado)
        aux = 0;
        
        // Laço para o array2
        for(j=0; j<TAM; j++){
            
            // array1[X] igual array2[Y]
            if(v[i] == v2[j]){
                
                // Se não for o item 0 da instersecao
                if(count != 0){
                    for(k=0; k<count; k++){
                        if(v[i] != intersecao[k]){
                            // Atribui como verdadeiro (é provado que está nos dois arrays e não está 'intersecao')
                            aux = 1;
                        }
                    }
                    // Se não for o item 0 da instersecao
                } else {
                    // Atribui como verdadeiro (é provado que está nos dois arrays)
                    aux = 1;
                }
                
            }
        }
        
        // Quando for provado que está nos dois arrays e não está na intersao incrementa na 'intersecao'
        if(aux == 1){
            intersecao[count] = v[i];
            count++;
        }
        
    }
    
    for(i=0; i<count; i++){
        printf("%d", intersecao[i]);
    }
    
    
    
    //--------- Uniao -----------
    
    /*count = 0;
     // Laço Array1
     for(i=0; i<TAM; i++){
     
     //array1[X] pode atribuir
     aux = 1;
     
     //Laço para o uniao
     for(j=0; j<count; j++){
     
     [1,2,3,4,4] // Array1
     [1,2,3,4] //União
     
     //Se array1[X] == uniao[]
     if(v[i] == uniao[j]){
     aux = 0;
     }
     }
     
     if(aux == 1){
     uniao[i] = v[i];
     count++;
     }
     }
     
     
     [3,4,5,6] // Array2
     [1,2,3,4,5,6] // União
     
     // Percorrer Array2
     for(i=0; i<TAM; i++){
     
     //Seta que o Array2[X] é true
     aux = 1;
     
     // Percorrer uniao
     for(j=0; j < count; j++){
     
     //Verificar se existe Array2[X] no array3
     if(v2[i] == uniao[j]){
     
     //Se existir seta como false para não entrar no arrayDestino
     aux = 0;
     
     }
     
     }
     
     //Se está apto a estrar no arrayDestino, então insere
     if(aux == 1){
     
     //Insere no arrayDestino
     uniao[count] = v2[i];
     //printf("%d Aki2", uniao[count]);
     //printf("\n");
     count++;
     
     }
     
     }
     
     for (i=0; i < (count); i++) {
     printf("%d", uniao[i]);
     }*/
    
    printf("\n");
    
    return 0;
}
