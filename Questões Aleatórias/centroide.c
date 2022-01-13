#include <stdlib.h>
#include <stdio.h>

typedef struct _point{
        double x,y;
    }ponto;

int main(){

    ponto *v, centroide;
    int n,i;
    printf("Digite a quantidade de pontos desejados: \n");
    scanf("%d",&n);

    v = malloc (n * sizeof(ponto));

    if(v==NULL){
        printf("Não há memoria o suficiente! \n");
        exit(1);
    }


    for (i=0;i<n;i++){
        scanf("%lf %lf", &v[i].x &v[i].y);
    }

    centroide.x = centroide.y = 0 ;
    for(i=0;i<n;i++){

        centroide.x += v[i].x/n;
        centroide.y += v[i].y/n;
    }

    printf("O centroide terá centro x = %lf e  y= %lf",centroide.x,centroide.y);
    free(v);
    return 0;
}