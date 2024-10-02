#include <stdio.h>
#include <string.h>


typedef struct 
{
    int longueur;
    int largeur;
}rectangle;
rectangle laire;

int main () {
    printf("saisir le longeur de rectangle :");
    scanf("%d",&laire.longueur);
    printf("saisir le longeur de largeur :");
    scanf("%d",&laire.largeur);
    printf("\nlair de rectangle est : %d",laire.largeur);

    return 0;
}