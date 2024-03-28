#include <stdio.h>

int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);
    int index[10];
    int length[10];
    int len;
    int i = 0;
    int j = 0;
    int k, ind;
    int temp;

    while (str[i]) {
        while (str[i] && str[i] == ' ')
            i++;
        ind = i;
        len = 0;
        while (str[i] && str[i] != ' ') {
            len++;
            i++;
        }
        if (len != 0) {
            index[j] = ind;
            length[j] = len;
            j++;
        }
    }

    i = 0;
    while (i < j - 1)
    {
        k = 0;
        while (k < j - i - 1)
        {
            int diff = 0;
            while (str[index[k] + diff] == str[index[k + 1] + diff] && str[index[k] + diff] != '\0') 
                diff++;
            if (str[index[k] + diff] > str[index[k + 1] + diff]) {
                temp = index[k];
                index[k] = index[k + 1];
                index[k + 1] = temp;

                temp = length[k];
                length[k] = length[k + 1];
                length[k + 1] = temp;
            }
            k++;
        }
        i++;
    }

    for (i = 0; i < j; i++) {
        k = index[i];
        while (str[k] && str[k] != ' ') {
            printf("%c", str[k]);
            k++;
        }
        printf("\n");
    }

    return 0;
}
