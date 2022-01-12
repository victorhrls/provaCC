/*
Enunciado:

Faça um programa que calcule a soma da diagonal principal , secundaria e quantas colunas possuem um somatorio par e quantas linhas um somatorio impar

*/

#include <stdio.h>
#define MAX 100

void soma_diagonal(int A[MAX][MAX], int tamanho,int **principal, int **secundaria){
    int i;

    for(i=0;i<tamanho;i++){ 
        principal += A[i][i];
        secundaria += A[i][tamanho-i];
    }
}

void linhas_colunas(int A[MAX][MAX],int tamanho,int **lines,int **columns){
    int i,j,colunas_par,linhas_impar;

    // colunas
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            colunas_par += A[i][j];
            if (colunas_par%2==0){
                columns +=1;
            }
        }
    }
    // linhas
    for(j=0;j<tamanho;j++){
        for(i=0;i<tamanho;i++){
            linhas_impar += A[i][j];
            if(linhas_impar%2!=0){
                lines +=1;
            }
        }
    }
}



int main(){
    int M[MAX][MAX],N,*diagonal_principal,*diagonal_secundaria,*linhas,*colunas,i,j;

    printf("Digite o tamanho da sua matriz: ");
    scanf("%d",&N);

    printf("Digite os elementos da sua matriz: \n");

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("Digite o elemento da matriz M%d%d   ",i,j);
            scanf("%d",&M[i][j]);
            
        }
    }

    linhas_colunas(M,N,&linhas,&colunas);
    soma_diagonal(M,N,&diagonal_principal,&diagonal_secundaria);


    printf("As linhas possuem %ls somatorios impar \n",linhas);
    printf("As colunas possuem %ls somatorios par \n", colunas);
    printf("As somas da diagonal principal e secundaria são : %ls e %ls ",diagonal_principal,diagonal_secundaria);


    return 0;
}