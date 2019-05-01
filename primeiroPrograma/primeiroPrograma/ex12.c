//
//  ex12.c
//  primeiroPrograma
//
//  Created by Vinicius Macedo on 04/04/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "ex12.h"
//Exercicio 12

int ex12() {
    
    int categoria;
    float preco, aumento, imposto, novoPreco;
    char situaco;
    
    printf("Preço? \n");
    scanf("%f", &preco);
    printf("Categoria (1/2/3)? \n");
    scanf("%d", &categoria);
    printf("Situação (R/N)? \n");
    scanf("%s", &situaco);
    
    if (preco > 0 && categoria >= 1 && categoria <= 3 && (situaco == 'R' || situaco == 'N')) {
        if (preco >= 25.00) {
            if (categoria == 1) {
                aumento = preco * 0.05;
            } if (categoria == 2) {
                aumento = preco * 0.08;
            } if (categoria == 3) {
                aumento = preco * 0.10;
            }
        } else {
            if (categoria == 1) {
                aumento = preco * 0.12;
            } if (categoria == 2) {
                aumento = preco * 0.15;
            } if (categoria == 3) {
                aumento = preco * 0.18;
            }
        } if (categoria == 2 || situaco == 'R') {
            imposto = preco * 0.05;
        } else {
            imposto = preco * 0.08;
        }
        novoPreco = preco + aumento - imposto;
        printf("\nValor aumento %.2f", aumento);
        printf("\nValor imposto %.2f", imposto);
        printf("\nValor novo preco %.2f", novoPreco);
        
        if (novoPreco <= 50.00) {
            printf("\nBarato\n");
        } if (novoPreco > 50.00 && novoPreco < 120.00) {
            printf("\nNormal\n");
        } if (novoPreco >= 120.00) {
            printf("\nCaro\n");
        }
    } else {
        printf("Erro! Preco, categoria ou situacao errados!\n");
    }
    
    return  0;
}
