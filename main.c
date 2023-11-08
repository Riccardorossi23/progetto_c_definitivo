#include "gamelib.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int opzioni = 0;
    printf("BENVENUTI IN PHALSOPHOBIA \n");
    do
    {
        printf("|||||||||||||||||||MENU PRINICIPALE||||||||||||||||||||||||\n");
        printf("scegli tra imposta gioco, gioca, termina gioco\n");
        printf("per scegliere imposta gioco premere 1 \n");
        printf("per scgliere gioca premere 2 \n");
        printf("per scegliere termina gioco premere 3 \n");
        printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf("seleziona le opzioni: ");
        scanf("%d", &opzioni);
        while (getchar() != '\n');
        switch(opzioni)
        {
            case 1:
            imposta_gioco();
            break;
            case 2:
            gioca();
            break;
            case 3:
            termina_gioco();
            break;
        default:
            printf(" Attenzione! Opzione non valida, per favore inserisci numero da 1 a 3.\n");
            break;
        }
    } while (opzioni != 3);
    return 0;
}