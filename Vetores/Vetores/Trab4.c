//
//  Trab4.c
//  Vetores
//
//  Created by Vinicius Macedo on 20/06/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//Faça um programa que lê os conteúdos de dois vetores de 10 posições contendo números inteiros ordenados (já os receba ordenados – apenas teste isso antes de resolver o problema a seguir) e encontra a união (conjuntos) destes dois vetores

#include <stdio.h>
#define TAM 5

int trab4(){
    
    int i = 0, j = 0, v[TAM], v2[TAM], *uniao, count, aux;
    
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
    
    //--------- Uniao -----------
   
    //Array3 = array1
    count = 0;
    for(i=0; i<TAM; i++){
        uniao[i] = v[i];
        count++;
    }
    //Array3 [0,1,2,3,4]
    
    
    // Percorrer Array3
    for(i=0; i<sizeof(uniao[i]); i++){
        
        //Seta que o Array2[X] é true
        aux = 1;
        
        // Percorrer array3
        for(j=0; j<TAM; j++){
            
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
            count++;
            
        }
        
    }
    
    for (i=0; i<sizeof(uniao[i]) + 2; i++) {
        printf("%d", uniao[i]);
    }
    printf("\n");
    printf("---- %lu", sizeof(uniao));
    
    return 0;
}

//uniao
//uniao[x] = v[i];
/*
 for (i=0; i<TAM; i++) {
 uniao[i] = v[i];
 //printf("Passando valores de V1 para uniao %d", uniao[x]);
 }
 
 for (j=0; j<TAM; j++) {
 if(uniao[i] != v2[j]){
 uniao[i] = v2[j];
 }
 }
 
 for (i=0; i<TAM; i++) {
 printf("%d", uniao[i]);
 }
 
 --------------------
 //Array3 = array1
 count = 0;
 for(i=0; i<TAM; i++){
 uniao[i] = v[i];
 count++;
 }
 
 // Percorrer Array3
 for(i=0; i<sizeof(uniao); i++){
 
 //Seta que o Array2[X] é true
 aux = 1;
 
 // Percorrer array3
 for(j=0; j<sizeof(uniao); j++){
 
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
 count++;
 
 }
 
 }
 
 for (i=0; i<sizeof(uniao); i++) {
 printf("%d", uniao[i]);
 }
 
 printf("\n9999", sizeof(uniao));
 
 
 */
