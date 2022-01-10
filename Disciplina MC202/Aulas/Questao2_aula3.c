/*
Enunciado 

Faça uma função que recebe uma string e que reverte o seu conteudo

ex: a tring "MC202" passa a ser "202MC"

*/

#include <stdio.h>
#define MAX 200

void reverse(char string[],int size,char new_string[]){
    int j;

    for (j=0;j<size;j++){

        new_string[j]=string[size- j];
    }
}
//Why this doesn't work??

int main(){
    char chat[MAX],new_chat[MAX];
    int n,i,cont;

    printf("Type your string: ");
    scanf("%[^\n] ", chat);

    
    for(i=0;chat[i]!=0;i++){
        cont++;
    }
    
    reverse(chat,cont,new_chat);

    printf("Your string reversed is : %s ",new_chat);


    return 0;
}