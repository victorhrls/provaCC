/*Enunciado:

Dado um tempo t em segundos, converta para a representação  horas-minutos-segundos.

Exemplo:
123456s é 34h17m36s

*/


#include <stdio.h>

int main(){
    int seconds_input,seconds_output,h,m;
    double hours,minutes;

    printf("Type the amount of seconds that you want to count: ");
    scanf("%d",&seconds_input);

    //Remember that i only want the inter part of this

    hours = seconds_input/(60*60);    
    h = (int) hours;
    minutes = seconds_input/60 - h*60;
    m = (int) minutes;
    seconds_output = seconds_input - m*60;

    printf(" %d seconds is equal to %dh-%dm-%ds",seconds_input,h,m,seconds_output);
    return 0;
}