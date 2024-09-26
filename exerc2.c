#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	printf("Digite uma palavra:\n");
	fgets(string,100,stdin);
string[strlen(string)-1]= '\0';
	printf("o tamanho da palavra = %d (Utilizando strlen)\n",strlen(string));
	int i;
	int tam = 0;
	for(i=0;i<strlen(string);i++){
		tam++;
	}
    printf("o tamanho da palavra = %d (Sem ultilizar strlen)\n",tam);
	return 0;
}
