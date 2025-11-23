#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;
};

int main() {
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name, e.id, e.join.day, e.join.month, e.join.year);

    return 0;
}