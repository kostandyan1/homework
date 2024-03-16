#include <stdio.h>

int main()
{
    char str[10] = "aabbccddee";
    char str_new[10];
    int i = 0;
    int j = 0;
    int c;

    while(str[i])
    {
        c = 0;
        while(c <= i && str[c] != str[i])
            c++;
        if (c != i)
        {
            str_new[j] = str[i];
            j++;
        }
        i++;          
    }  
    str_new[j] = '\0';  
    printf("%s", str_new);
    return (0);
}