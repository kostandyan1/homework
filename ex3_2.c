#include <stdio.h>

int main()
{
    char str[] = "ab123ab456ab789ab";
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] == 'a' && str[i + 1] == 'b') {
            i += 2;
        } else {
            str[j] = str[i];
            j++;
            i++;
        }
    }
    str[j] = '\0';
    printf("%s", str);
    return (0);
}