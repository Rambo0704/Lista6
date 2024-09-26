#include <stdio.h>

int eLetraMaiuscula(char c) {
    return (c >= 'A' && c <= 'Z');
}
int eLetraMinuscula(char c) {
    return (c >= 'a' && c <= 'z');
}
int eNumero(char c) {
    return (c >= '0' && c <= '9');
}
int main() {
    char senha[101];
    int i;
    int temMaiuscula = 0, temMinuscula = 0, temNumero = 0;
    int comprimento = 0;
    printf("Digite uma senha:");
    fgets(senha, sizeof(senha), stdin);
    for (i = 0; senha[i] != '\0'; i++) {
        if (senha[i] == '\n') {
            senha[i] = '\0';
        }
    }
    for (i = 0; senha[i] != '\0'; i++) {
        comprimento++;

        if (eLetraMaiuscula(senha[i])) {
            temMaiuscula = 1;
        } else if (eLetraMinuscula(senha[i])) {
            temMinuscula = 1;
        } else if (eNumero(senha[i])) {
            temNumero = 1;
        }
    }

    if (comprimento < 8) {
        printf("Senha invalida: deve ter no minimo 8 caracteres.\n");
    } else if (comprimento > 100) {
        printf("Senha invalida: deve ter no maximo 100 caracteres.\n");
    } else if (!temMaiuscula) {
        printf("Senha invalida: deve conter pelo menos uma letra maiuscula.\n");
    } else if (!temMinuscula) {
        printf("Senha invalida: deve conter pelo menos uma letra minuscula.\n");
    } else if (!temNumero) {
        printf("Senha invalida: deve conter pelo menos um numero.\n");
    } else {
        printf("Senha valida.\n");
    }

    return 0;
}

