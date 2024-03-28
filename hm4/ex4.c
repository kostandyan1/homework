#include <stdio.h>
#include <string.h>

struct one_book{
    char    title[20];
    int     pages;
    int     price;
};

struct books{
    struct one_book book1;
    struct one_book book2;
    struct one_book book3;
    struct one_book book4;
    struct one_book book5;
    struct one_book book6;
    struct one_book book7;
    struct one_book book8;
    struct one_book book9;
    struct one_book book10;
    struct one_book book11;
    struct one_book book12;
    struct one_book book13;
    struct one_book book14;
    struct one_book book15;
    struct one_book book16;
    struct one_book book17;
    struct one_book book18;
    struct one_book book19;
    struct one_book book20;

};

struct individ{
    char            name[10];
    char            surname[10];
    struct books    bk;};

int main() {
    int n;
    printf("Enter the number of people: ");
    scanf("%d", &n);

    struct individ persons[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name and surname: ");
        scanf("%s %s", persons[i].name, persons[i].surname);
        printf("Enter information for books:\n");
        for (int j = 0; j < 20; j++) {
            printf("Book %d: ", j + 1);
            scanf("%s %d %d", persons[i].bk.book[j].title, &persons[i].bk.book[j].pages, &persons[i].bk.book[j].price);
        }
    }

    printf("\nPeople with books having more than 200 pages and price less than %d:\n", P);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 20; j++) {
            if (persons[i].bk.book[j].pages > 200 && persons[i].bk.book[j].price < P) {
                printf("%s %s - Book Title: %s, Pages: %d, Price: %d\n", persons[i].name, persons[i].surname, 
                       persons[i].bk.book[j].title, persons[i].bk.book[j].pages, persons[i].bk.book[j].price);
            }
        }
    }

    return 0;
}