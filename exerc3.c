#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	printf("Digite uma palavra:\n");
	fgets(string,100,stdin);
	int j,i,temp;
	int tamanho = strlen(string);
 for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1; j++) {
            if (string[j] > string[j + 1]) {
                temp = string[j];
                string[j] = string[j + 1];
                string[j + 1] = temp;
            }
        }
    }
    	for(i=0;i<strlen(string);i++){
		printf("%c",string[i]);
		}
	return 0;
}
