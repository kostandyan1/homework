#include <stdio.h>

int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);
    int i = 0;
    int j = 0;

    while (str[j])
        j++;
    j--;
    while(i < j)
    {
        if (str[i] != str[j])
        {
            printf("False\n");
            return (0);
        }
        i++;
        j--;
    }
    printf("True\n");
    return (0);
}