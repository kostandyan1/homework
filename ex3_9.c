#include <stdio.h>

int main()
{
    char str[12] = "(a+b)*(c+d)";
    int i = 0;
    int count = 0;

    while(str[i])
    {
        if (str[i] == '(')
            count += 1;
        else if (str[i] == ')')
            count -= 1;
        i++;
    }    
    if (count == 0)
        printf("True\n");
    else
        printf("False");
    return (0);
}