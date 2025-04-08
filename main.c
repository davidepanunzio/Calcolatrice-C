#include <stdio.h>
#include "operazioni.h"
#include "input.h"
#include "menu.h"
#include "errori.h"

int main() {
    int scelta;
    double a, b, risultato;

    do {
        menu();
        scelta = inputScelta();

        if (scelta >= 1 && scelta <= 4) {
            printf("Inserisci il primo numero: ");
            a = inputCifre();
            printf("Inserisci il secondo numero: ");
            b = inputCifre();
        } else if (scelta == 5) {
            printf("Inserisci la base: ");
            a = inputCifre();
            printf("Inserisci l'esponente: ");
            b = inputCifre();
        } else if (scelta == 6) {
            printf("Inserisci il numero: ");
            a = inputCifre();
        }

        switch (scelta) {
            case 1:
                risultato = somma(a, b);
                printf("Risultato: %.2f\n", risultato);
                break;
            case 2:
                risultato = sottrazione(a, b);
                printf("Risultato: %.2f\n", risultato);
                break;
            case 3:
                risultato = moltiplicazione(a, b);
                printf("Risultato: %.2f\n", risultato);
                break;
            case 4:
                if (b != 0) {
                    risultato = divisione(a, b);
                    printf("Risultato: %.2f\n", risultato);
                } else {
                    erroreDivisione();
                }
                break;
            case 5:
                risultato = potenza(a, b);
                printf("Risultato: %.2f\n", risultato);
                break;
            case 6:
                if (a >= 0) {
                    risultato = radiceQuadrata(a);
                    printf("Risultato: %.2f\n", risultato);
                } else {
                    erroreRadice();
                }
                break;
            case 7:
                printf("Uscita...\n");
                break;
            default:
                erroreScelta();
        }

    } while (scelta != 7);

    return 0;
}
