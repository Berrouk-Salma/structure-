#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    char surname[50];
    int age;
};

int main() {
    struct Person person;

    strcpy(person.name, "salma");
    strcpy(person.surname, "vaja");
    person.age = 23;

    printf("Name: %s\n", person.name);
    printf("Surname: %s\n", person.surname);
    printf("Age: %d\n", person.age);

    return 0;
}
