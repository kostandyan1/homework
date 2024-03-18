#include <stdio.h>

int main() {
    char str[] = "abcxcba";
    int i = 0;
    int j = 0;

    while (str[i]) {
        if (str[i] == 'x') 
        {
            str[j] = 'y';
            str[j + 1] = 'y';
            j += 2;
            i++;
        }
        else 
        {
            str[j] = str[i];
            j++;
            i++;
        }
    }
    str[j] = '\0';
    printf("%s", str);
    return (0);
}