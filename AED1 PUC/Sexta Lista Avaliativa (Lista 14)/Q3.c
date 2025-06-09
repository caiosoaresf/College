#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[50];
    float height;
    Date birth;
} Person;

void main() {
    Person p[10];

    int i = 1;
    do {
        printf("Person %d:\n", i);
        printf("name: ");
        scanf("%[^\n]", p[i].name);
        getchar();
        printf("height: ");
        scanf("%f", &p[i].height);
        getchar();

        printf("Date de birth (DD MM AAAA): ");
        scanf("%d %d %d", 
              &p[i].birth.day,
              &p[i].birth.month,
              &p[i].birth.year);
        getchar();
        i++;
    } while (i <= 10);

    printf("List of the people:\n");
    for (int i = 0; i < 10; i++) {
        printf("Person %d: , whose name is: %s, height is %.2f and date of birth is: %02d/%02d/%d ", i, p[i].name, p[i].height, p[i].birth.day, p[i].birth.month, p[i].birth.year);
    }
}
