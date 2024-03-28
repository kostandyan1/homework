#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    int i = 0;
    int start;
    int end;
    int temp;

    while (str[i])
    {
        while ((str[i] == ' ' || str[i] == '\t') && str[i])
            i++;
        start = i;
        while ((str[i] != ' ' && str[i] != '\t') && str[i])
            i++;
        end = i - 1;
        temp = start;
        while (start < end && str[start] == str[end])
        {
            start++;
            end--;
        }
        if (start >= end)
        {
            while ((str[temp] != ' ' && str[temp] != '\t') && str[temp])
            {
                printf("%c", str[temp]);
                temp++;
            }
            printf("\n");
        }
        i++;
    } 
    return (0);
}