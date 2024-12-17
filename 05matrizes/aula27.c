// revisao vetores e matrizes

#include <stdio.h>

int main(){

    const int bimestresAnuais = 4;
    // em caso de erro - usar DEFINE para constante.
    // #define BIMESTRES_ANUAIS 4
    // #define NUMERO_DE_ALUNOS 4
    const int numeroDeAlunos = 4;

    float notasAlunos[numeroDeAlunos][bimestresAnuais] = {0};
    float mediasAlunos[numeroDeAlunos] = {0};
    float media = 0;

    printf("insira as 4 notas do aluno 1:\n");
    
    for (int aluno = 0; aluno < numeroDeAlunos; aluno++){
        for(int notas = 0; notas < bimestresAnuais; notas++){
            scanf("%f", &notasAlunos[aluno][notas]);
            media += notasAlunos[aluno][notas];
            // tal forma que a media vai conter a soma das notas de cada aluno
        }
        mediasAlunos[aluno] = media / bimestresAnuais;
        media = 0;
        // e necessario zerar a media, pois uma vez que o ciclo termina, 
        //as notas passam a ser de outro aluno
        printf("Insira as 4 notas do aluno %d:\n", aluno + 2);
    }

    for (int aluno= 0; aluno < numeroDeAlunos; aluno++){
        printf("a media do aluno %d eh %.2f\n", aluno + 1,  mediasAlunos[aluno]);
    }   // comeca com 0 e por isso tem-se o +1.

    return 0;
}