#include <stdio.h>


int main(){
    int *endereco;
    int variavel = 90;
    endereco = &variavel;

    printf("Variavel: %d\n",variavel);
    printf("Variavel: %d\n", *endereco);
    printf("endereço: %p\n",endereco);
    printf("endereço: %p\n",&variavel);

    

    return 0;
}