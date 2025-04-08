#include <stdio.h>
#include "errori.h"

void erroreScelta() {
    printf("Errore! Scelta non valida.\n");
}

void erroreDivisione() {
    printf("Errore! Impossibile dividere per zero.\n");
}

void erroreRadice() {
    printf("Errore! Impossibile calcolare la radice quadrata di un numero negativo.\n");
}
