/* Enunciado

Dada uma aplicação financeira com : 
i) Depósito inicial de ini reais;
ii)Depósitos mensais de mensal reais;
iii)juros mensais de j porcento ao mês;
iv) e um numero de meses t;
Calcule o valor final da aplicação


*/



#include <stdio.h>
#include <math.h>

double juros_compostos(double dep_mensal, double dep_inicial, int juro_m, int tempo){
    double M;
    M = pow(dep_inicial*(1+juro_m),tempo);

    return M;
}


int main(){
    int t,j;
    double mensal,ini,res;

    printf("Digite os valores de : Depósito inicial,Depósitos mensais, juros mensais e o tempo decorrido: ");
    scanf("%lf %ld %d %d", &ini,&mensal,&j,&t);

    res = juros_compostos(mensal,ini,j,t);

    printf("O valor esperado é %ld \n ",res);

    return 0;
}