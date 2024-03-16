#include <stdio.h>

int main()
{
    char str[10] = "aabbccddee";
    int i = 0;
    int c;

    while(str[i])
    {
        c = 0;
        while(c <= i && str[c] != str[i])
            c++;
        if (c != i)
            i++;
        else
        {
            printf("%c", str[i]);
            i++;
        }
    }    
}