#include <stdio.h>

int main() 
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (str[i]) {
        if ((i + 1) % 3 != 0) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    printf("%s", str);
    return 0;
}