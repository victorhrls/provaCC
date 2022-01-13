#include <stdio.h>
#include <stdlib.h>


int main(){
    double media,*notas;
    int i,n;

    scanf("%d",&n);

    // o meu ponteiro notas precisa de um tamanho de memoria de n*sizeof(double) para armazenar as medias

    notas = malloc(n * sizeof(double));

    if (notas==NULL){
        printf("Não há memoria o suficiente! \n");
        exit(1);
    }

    for(i=0;i<n;i++){
        scanf("%lf",&notas[i]);
    }
    for(i=0;i<n;i++){
        media += notas[i]/n;
    }

    printf("A média foi: %lf \n",media);

    free(notas); //liberar o espaço que eu utilizei


    return 0;
}