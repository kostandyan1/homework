#include <stdio.h>

int main() 
{
    char str[]= "12:3:321:6:";
    int i;
    int j;
    int count;
    
    i = 0;
    j = 0;
    count = 0;
    while (str[i]) 
    {
        count = 0;
        if (str[i] == ':' && str[i + 1] != ':') 
        {
            j = i + 1;
            while (str[j] && str[j] != ':')
                j++;
            if (str[j] == ':')
            {
                count = j - i - 1;
                printf("%d\n", count);
            }
        }
        i++;
    }
    return 0;
}