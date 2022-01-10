#include <stdio.h>
#define MAX 300
/* Faça uma função que copia uma string1 em uma string 2

*/

void copia(char string1[],char string2[]){
    int i;

    for(i=0;string1[i]!=0;i++){
        string2[i]=string1[i];
    }
}


int main(){
    char stringa[MAX],stringb[MAX];
    printf("let's print one string on another! \n");
    printf("First you have to write down your first string: \n");
    scanf(" %[^\n] ", stringa);

    copia(stringa,stringb);

    printf("Was your string : %s ?",stringb);
  
    return 0;
}