#include <stdio.h>

int main() {
    char str[] = "axaxbxcxdxexfxgx";
    int i = 0;
    int j = 0;

    while (str[i]) {
        if (str[i] == 'x') 
            printf("yy");
        else 
            printf("%c", str[i]);
        i++;
    }
    str[j] = '\0';
    printf("%s", str);
    return (0);
}
