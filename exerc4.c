#include <stdio.h>

int ehLetra(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
int ehNumero(char c) {
    return (c >= '0' && c <= '9');
}

int ehAlfaNumerico(char c) {
    return ehLetra(c) || ehNumero(c);
}
char paraMinusculo(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c; 
}

int main() {
    char str[200], cleanStr[200];
    int i, j = 0, length = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
        }
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (ehAlfaNumerico(str[i])) {  
            cleanStr[j++] = paraMinusculo(str[i]);  
        }
    }
    cleanStr[j] = '\0';  

    
    length = j;  
    int isPalindrome = 1;
    for (i = 0; i < length / 2; i++) {
        if (cleanStr[i] != cleanStr[length - i - 1]) {
            isPalindrome = 0;  
            break;
        }
    }

    if (isPalindrome) {
        printf("A string e um palindromo.\n");
    } else {
        printf("A string nao e um palindromo.\n");
    }

    return 0;
}

