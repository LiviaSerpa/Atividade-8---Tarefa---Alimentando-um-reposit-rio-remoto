#include<stdio.h>
#include<stdio.h>
#include<locale.h>

int main (int argc, char *argv[]) {
setlocale (LC_ALL, "portuguese");

	float maiorNota = 0, menorNota = 10, media = 0, nota = 0, soma = 0; 
	int i;

for(i = 1; i <=5; i++){
	printf ("Informe a %dª nota: ", i); 
	scanf ("%f", &nota); 
	soma += nota;
if(nota > maiorNota){
	maiorNota = nota;
	}
if(nota < menorNota){
	menorNota = nota;
	}
}
	media = soma / 5;
	printf ("A média é: %f \n\n", media);
if (media >= 7){ 
	printf ("Aluno aprovado");
} else {
if(media < 3){
	printf ("Aluno reprovado");
} else {
	printf ("Prova final");
	}
 printf ("\n\nA maior nota do aluno foi %f.", maiorNota);
 printf ("\n\nA menor nota do aluno foi %f.", menorNota);
	return 0;
				}
}

