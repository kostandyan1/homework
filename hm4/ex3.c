#include <stdio.h>
#include <string.h>

struct family{
    int spouse;
    int boy;
    int girl;
};

struct individ{
    char            name[10];
    char            surname[10];
    char            gender[6];
    struct family   fm;
    int             salary;
};

int main() {
    int n;
    printf("Enter the number of people : ");
    scanf("%d", &n);

    int P = 50000;
    struct individ persons[n];

    for (int i = 0; i < n; i++) {
            printf("Enter name, surname, gender, spouse, boy, girl, salary: ");
            scanf("%s %s %s %d %d %d %d ", persons[i].name, persons[i].surname, persons[i].gender, &persons[i].fm.spouse, 
            &persons[i].fm.boy, &persons[i].fm.girl, persons[i].salary);
    }

    int mijin;
    for (int i = 0; i < n; i++) {
        mijin = persons[i].salary/(1 + persons[i].fm.spouse + persons[i].fm.boy + persons[i].fm.girl);
        if (strcmp(persons[i].gender, "male" == 0 && persons[i].fm.boy + persons[i].fm.girl > 0 && mijin < P))
            printf("%s %s\n", persons[i].name, persons[i].surname);
    }
    return 0;
}