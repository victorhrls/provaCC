/*
Enunciado:

Faça um programa que calcule a soma da diagonal principal , secundaria e quantas colunas possuem um somatorio par e quantas linhas um somatorio impar

*/

#include <stdio.h>
#define MAX 100

void soma_diagonal(int **matriz, int tamanho,int *principal, int *secundaria){
    int i;

    for(i=0;i<tamanho;i++){ 
        principal += matriz[i][i];
        secundaria += matriz[i][tamanho-i];
    }
}

void linhas_colunas(int **matriz,int tamanho,int *lines,int *columns){
    int i,j,colunas_par,linhas_impar;

    // colunas
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            colunas_par += matriz[i][j];
            if (colunas_par%2==0){
                columns =+1;
            }
        }
    }
    // linhas
    for(j=0;j<tamanho;j++){
        for(i=0;i<tamanho;i++){
            linhas_impar += matriz[i][j];
            if(linhas_impar%2!=0){
                lines +=1;
            }
        }
    }
}



int main(){
    int M[MAX][MAX],N,*diagonal_principal,*diagonal_secundaria,*linhas,*colunas;

    printf("Digite o tamanho da sua matriz: ");
    scanf("%d",&N);

    soma_diagonal(M,N,&diagonal_principal,&diagonal_secundaria);

    linhas_colunas(M,N,&linhas,&colunas);

    printf("As linhas possuem %d somatorios impar \n",linhas);
    printf("As colunas possuem %d somatorios par \n", colunas);
    printf("As somas da diagonal principal e secundaria são : %d e %d ",diagonal_principal,diagonal_secundaria);


    return 0;
}