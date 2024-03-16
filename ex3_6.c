#include <stdio.h>

int main()
{
    char str1[6] = "abcdab";
    char str2[20] = "xxaxxxbxxxxxcxxxxxdx";
    int count = 0;
    int i = 0;
    int c;
    int k;

    while (str1[i])
    {
        c = 0;
        k = 0;
        while (c <= i && str1[c] != str1[i])
            c++;
        while (str2[k] && str2[k] != str1[i])
            k++;
        if (c == i && str2[k] == str1[i])
        {
            count += 1;
            i++;
        }
        else
            i++;
    }
    printf("%d\n", count);
    return (0);
}