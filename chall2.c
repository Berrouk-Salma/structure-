#include <stdio.h>
#include <string.h>

typedef struct
{
   char nom [10];
   char prenom [10];
   int notes[5];

}persons;

persons person ;
int main (){
    int size_note;
        printf("saisir le nom");
        scanf("%s",&person.nom);
        printf("saisir le prenom");
        scanf("%s",&person.prenom);
        printf("saisir la notes");
        scanf("%d",&person.notes);
        for (int i = 0; i < size_note; i++)
        {
            printf("saisir le note nombre %s \n" , i +1);
            scanf("%d",&person.notes[i]);
        }
        printf("le nom est : %s \n le prenom est : %s \n",person.nom, person.prenom);
        for (int i = 0; i < size_note; i++)
        {
            printf("les notes est :%d\n",person.notes[i]);
        }
        return 0;
}

