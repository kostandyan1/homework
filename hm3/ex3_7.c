#include <stdio.h>

int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);

    char str_new[100];
    int i = 0;
    int j = 0;
    int k;

    while (str[i]) {
        k = 0;
        int count = 0;
        while (str[k]) {
            if (i != k && str[i] == str[k])
                count++;
            k++;
        }
        if (count == 0) {
            str_new[j++] = str[i];
            putchar(str[i]);
        }
        i++;
    }
    printf("\n");
    return 0;
}
