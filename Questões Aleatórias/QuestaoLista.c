# include <stdio.h>
#define MAX 200
#define EPS 0.001
// Escalar product with 2 arrays of size 50

int escalar(int a[] ,int b[] , int n){
    int i,soma=0;
    for (i=0;i<n;i++){
        soma += a[i] * b[i];
    }
    return soma;
}

void produtovetorial(int a[], int b[], int w[]){
    // W is the out vector because it is a void function!
    w[0]= a[1]*b[2] - a[2]*b[1];
    w[1]= a[2]*b[0] - a[0]*b[2];
    w[2]= a[0]*b[1] - a[1]*b[0];

}
int main(){

    int x[MAX],y[MAX],cont,n,prod,w[MAX];
    // Make All Numbers 0

    printf("Type the size of your array:  ");
    scanf("%d",&n);

    for (cont=0;cont<n;cont++){
        printf("Type your array for vector A: ");
        scanf("%d",&x[cont]);
    }

    for (cont=0;cont<n;cont++){
        printf("Type your array for vector B: ");
        scanf("%d",&y[cont]);
    }
    produtovetorial(x,y,w);

    prod = escalar(x,y,n);
    printf("The intern product between X and Y is : %d \n",prod);

    if (prod==0){

        printf("The vectors A and B are perpendicular! \n");
    }
    return 0;
}