#include <stdio.h>

int main() {
    char str[] = "abcdefedcba";
    int i = 0;
    int j = 0;

    while (str[j])
        j++;
    j--;
    while(i < j)
    {
        if (str[i] != str[j])
        {
            printf("False");
            return (0);
        }
        i++;
        j--;
    }
    printf("True");
    return (0);
}