#include <stdio.h>
#include <string.h>

struct address{
    char town[15];
    char street[15];
    char home[15];
};

struct phones{
    char home_phone[5];
    char personal_phone[9];
};

struct individ{
    char            name[10];
    char            surname[10];
    int             year;
    struct address  addr;
    struct phones   phn; 
};

int main() {
    int n;
    printf("Enter the number of people : ");
    scanf("%d", &n);

    struct individ persons[n];

    for (int i = 0; i < n; i++) {
            printf("Enter name, surname, birth year, town, street, home, personal number, home number: ");
            scanf("%s %s %d %s %s %s %s %s", persons[i].name, persons[i].surname, &persons[i].year, persons[i].addr.town, 
            persons[i].addr.street, persons[i].addr.home, persons[i].phn.personal_phone, persons[i].phn.home_phone);
    }

    int t;
    for (int i = 0; i < n; i++) {
        t = 2024 - persons[i].year;
        if (t > 20 && strcmp(persons[i].addr.town, "vanadzor") == 0 && strncmp(persons[i].phn.personal_phone, "095", 3) == 0)
            printf("%s %s\n", persons[i].name, persons[i].surname);
    }
    return 0;
}