/*
Enunciado:
Faça uma função compara(str1,str2) que compara duas strings e 
a)Devolve 0 se elas forem iguais
b)devolve 1 se str1 > str2
c)devolve -1 se str1< str2

*/


#include <stdio.h>
#define MAX 300



int size_of_string(char string[]){
    int n,i;

    for(i=0;string[i]!=0;i++){
        n++;
    }

    return n;
}




int compara(char str1[],char str2[]){
    int diferent=0,i,size_str1,size_str2;

    for(i=0;str1[i]!=0;i++){
        if (str1[i]==str2[i]){
            diferent++;
        }
    }

    if (diferent==0){
        return 0;
    }

    if (diferent>0 && size_of_string(str1)>size_of_string(str2)){
        return 1;
    }
    else if(diferent>0 && size_of_string(str1)<size_of_string(str2)){
        return -1;
    }
}


int main(){
    char string1[MAX],string2[MAX];
    int compare;


    printf("Type your first string: ");
    scanf("%[^\n] ",string1);

    printf("\n");

    printf("Print your second string: ");
    scanf("%[^\n] ",string2);

    compare = compara(string1,string2);

    if (compare == 0){
        printf("The strings are the same! \n");
    }
    else if(compare == 1){
        printf("The first string is BIGGER than the second! \n");
    }
    else if(compare == -1){
        printf("The first string is SMALLER than the second! \n");
    }


    return 0;
}