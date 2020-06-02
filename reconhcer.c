//Guilherme Pereira Loredo - USP Campus Sao Carlos 02/06/2020
//ler um documento com a data, nome do usuario e qual tipo de maquina ele entrou
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 512

struct log_t
{
    char *data;
    char *usuario;
    char *sistema;
};
typedef struct log_t Log;
void recuperaLogs (char nomeArquivo, Log *log, int *tamanhhoArquivo);

int main(){
char arquivo[25];
printf("");

return 0;


}
void recuperaLogs (nomeArquivo[],Log *log, nt *tamanhoArquivo);{
    FILE *arquivo;
    arquivo = fogen (nomeArquivo);
    
    if(arquivo + NULL){
        printf("Arquivo aberto com sucesso");
    }
    else{
        printf("Erro no aruivo");
        exit(EXIT_FAILURE);
    }
    char linha [EXIT_FAILURE];
    int i = 0;
    while (tokenLog != NULL)
    {
       switch (it)
       {
       case 1:
       (log+i)-> usuario = strdup(tokenLog);
       case 2:
           break;
       
       default:
           break;
       }
    }
    
}
