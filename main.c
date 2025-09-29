#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 100

int main() {
    char frase[] = "i topi non avevano nipoti";
    char pulita[MAX_LEN];
    int i, j = 0;

    // Rimuove gli spazi e converte in minuscolo
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') {
            pulita[j++] = tolower(frase[i]);
        }
    }
    pulita[j] = '\0';

    // Controlla se la stringa è palindroma
    int len = strlen(pulita);
    int palindroma = 1;

    for (i = 0; i < len / 2; i++) {
        if (pulita[i] != pulita[len - 1 - i]) {
            palindroma = 0;
            break;
        }
    }

    if (palindroma) {
        printf("La frase e' palindroma.\n");
    } else {
        printf("La frase NON e' palindroma.\n");
    }

    return 0;
}
