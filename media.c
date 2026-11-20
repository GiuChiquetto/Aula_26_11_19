#include<stdio.h>
int main(){
    float nota1_aluno_A;
    float nota2_aluno_A;
    float nota1_aluno_B;
    float nota2_aluno_B;
    float soma_aluno_A;
    float media_aluno_A;
    float soma_aluno_B;
    float media_aluno_B;

    nota1_aluno_A = 7.0;
    nota2_aluno_A = 9.0;

    nota1_aluno_B = 6.0;
    nota2_aluno_B = 6.0;

    soma_aluno_A = nota1_aluno_A + nota2_aluno_A;
    media_aluno_A = soma_aluno_A / 2.0;

    soma_aluno_B = nota1_aluno_B + nota2_aluno_B;
    media_aluno_B = soma_aluno_B / 2.0;

    printf("Media, %.2f\n ",media_aluno_A);
    printf("Media, %.2f\n ",media_aluno_B);
}
