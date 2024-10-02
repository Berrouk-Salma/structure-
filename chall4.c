#include <stdio.h>

typedef struct
{
    char titre[100];
    char auteur[100];
    int annee[100];
} livres;
livres livre ;
int main()
{
int size_note;
    printf("saisir le titre de livre :");
    scanf("%s", &livre.titre);
    printf("saisir le auteur de livre :");
    scanf("%s", &livre.auteur);
    printf("Siser lannee de livre : ");
    scanf("%d", &livre.annee);
   printf("le titre de livre est : %s\n",livre.titre);
   printf("lauteur de livre est : %s\n",livre.auteur);
   printf("lannee de livre est : %s\n",livre.annee);

    return 0;
}