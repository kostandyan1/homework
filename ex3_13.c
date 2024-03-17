#include <stdio.h>

int main()
{
    char str[100] = "eeejjjeeejjjeeeje  iiiiiiiiifi  aaabbbaaa  ";
    int index;
    int count_vows = 0;
    int max_vows = 0;
    int max_index[10];
    int i = 0;
    int j = 0;

    while (str[i])
    {
        while (str[i] && str[i] == ' ')
            i++;
        index = i;
        count_vows = 0;
        while (str[i] && str[i] != ' ')
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' || 
                str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'U' || str[i] == 'I')
                count_vows++;
            i++;
        }
        if (count_vows >= max_vows)
        {
            max_vows = count_vows;
            max_index[j] = index;
            j++;
        }
        i++;
    }
    int k = 0;
    while (k < j)
    {
        int c = max_index[k];
        while (str[c] && str[c] != ' ')
        {
            printf("%c", str[c]);
            c++;
        }
        printf("\n");
        k++;
    }
    return (0);
}