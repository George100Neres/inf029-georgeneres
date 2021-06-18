#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char texto[50];
    int i,j,c,conta=1;
    int total;
	int repetidos=0;
    printf("\nDigite a frase: ");
    fgets(texto, 50, stdin);/* fgets pega todos caracteres + newline \n + finalizador \0 */
    c = strlen(texto);
    printf("\n%s",texto);
    for(i=0; texto[i]!='\n'; i++){
        if(texto[i]==' '){
            conta++; // espaços
        }
    }
    /*  pegando com fgets
        frase ex: calculo
        no vetor de char ficaria assim : calculo\n\0
    */
    for(i=0; texto[i]!='\0';i++){/* siginifica : i começando de zero , enquanto conteúdo de texto na posição i diferente de \0 */
        for(j=0; texto[j]!='\0';j++){/* testar todos com todos */
            if(texto[i] == texto[j] && j != i){/* se os caracteres forem iguais e não for o mesmo caractere */
                repetidos++;
                break;/* encontrou caract igual  termine esse loop */
            }
        }
    }
    total = c - conta - repetidos;
    printf("\nNumero de letras retirando repetidos = %d\n\n", total);
    return 0;
}