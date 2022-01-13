#include <stdio.h>
#include <stdlib.h>

/*
Declare uma struct que armazena as informações de notas de uma turma. Essa estrutura deve armazenar o numero de alunos , as notas das provas 
e a maior nota!


*/
typedef struct _turma{  
    double notas,maior_nota;
    int num_alunos;

}turma;

void imprime(turma *aluno, int size){
    int i;
    for(i=0;i<size;i++){
        printf("%lf",aluno[i].notas);
    }
    printf("A maior nota foi: %lf",aluno->maior_nota);
}

int main(){
    turma *p;
    int i,n,pos;
    double nota_alta=0.0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d",&n);

    p = malloc ( n * sizeof(turma)); 

    if (p == NULL)
        printf("Não há memoria o suficiente! \n");
        exit(1);
    // malloc para alocar dinamicamente a memoria de 1 turma com n alunos!
    for (i=0;i<n;i++)
        scanf("%lf",&p[i]->notas);

        if (p[i].notas > nota_alta)
            nota_alta =p[i]->notas;
            p[i]->maior_nota = nota_alta;
            pos = i;
    //for para receber as notas de cada alunos e ver qual a maior nota 

    
    printf("O numero de alunos é %d e a maior nota é %lf",n,p[pos]->maior_nota);

    free (p);


    return 0;
}