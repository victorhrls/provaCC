// Produto de Hadamard

#include <stdio.h>
#define MAX 100

void Hadamard(int u[],int v[],int w[],int a){
    int i;
    for (i=0;i<a;i++){
        w[i]= u[i]*v[i];
    }
}

int main(){
    int u[MAX],v[MAX],w[MAX],k,num;

    printf("Type the size of the vectors that you want: ");
    scanf("%d",&num);


    printf("Type the elements of your U array: ");
    for(k=0;k<num;k++){
        printf("Type your %d element: ",k+1);
        scanf("%d",&u[k]);
    }

     printf("Type the elements of your V array: ");
    for(k=0;k<num;k++){
        printf("Type your %d element: ",k+1);
        scanf("%d",&v[k]);
    }
    Hadamard(u,v,w,num);


    printf("The New Vector W will be: ");
    for(k=0;k<num;k++){
        printf(w[k]);
    }

    return 0;
}