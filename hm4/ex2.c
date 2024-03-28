#include <stdio.h>
#include <string.h>

struct points{
    int point1;
    int point2;
    int point3;
    int point4;
    int point5;
};

struct individ{
    char            name[10];
    char            surname[10];
    char            gender[6];
    struct points   pts;
    int             pension;
};

int main() {
    int n;
    printf("Enter the number of people : ");
    scanf("%d", &n);

    struct individ persons[n];

    for (int i = 0; i < n; i++) {
            printf("Enter name, surname, gender, 5 points (<= 100), pension: ");
            scanf("%s %s %s %d %d %d %d %d %d", persons[i].name, persons[i].surname, persons[i].gender, &persons[i].pts.point1, 
            &persons[i].pts.point2, &persons[i].pts.point3, &persons[i].pts.point4, &persons[i].pts.point5, &persons[i].pension);
    }

    for (int i = 0; i < n; i++) {
        if (persons[i].pts.point1 < 40 || persons[i].pts.point2 < 40 || persons[i].pts.point3 < 40 || persons[i].pts.point4 < 40 || persons[i].pts.point5 < 40)
        {
            printf("%s %s has dept from\n", persons[i].name, persons[i].surname);
            if (persons[i].pts.point1 < 40)
                printf("from subject 1\n");
            if (persons[i].pts.point2 < 40)
                printf("from subject 2\n");
            if (persons[i].pts.point3 < 40)
                printf("from subject 3\n");
            if (persons[i].pts.point4 < 40)
                printf("from subject 4\n");
            if (persons[i].pts.point5 < 40)
                printf("from subject 5\n");
        }
    }
    return 0;
}