#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    int i = 0;
    int start;
    int end;
    char temp;

    while (str[i])
    {
        while ((str[i] == ' ' || str[i] == '\t') && str[i])
            i++;
        start = i;
        // printf("%d\n", end);
        while ((str[i] != ' ' && str[i] != '\t') && str[i])
            i++;
        end = i - 1;
        while (start < end)
        {
            temp = str[start];
            // printf("%c\n", str[start]);
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
        i++;
    } 
    printf("%s\n", str);
    return (0);
}