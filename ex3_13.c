#include <stdio.h>

int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);
    int index;
    int count_vows = 0;
    int max_vows = 0;
    int max_index[10];
    int vows[10];
    int i = 0;
    int j = 0;

    while (str[i]) {
        while (str[i] && str[i] == ' ')
            i++;
        index = i;
        count_vows = 0;
        while (str[i] && str[i] != ' ') {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'U' || str[i] == 'I')
                count_vows++;
            i++;
        }
        max_index[j] = index;
        vows[j] = count_vows;
        if (count_vows > max_vows)
            max_vows = count_vows;
        j++;
        i++;
    }

    for (int k = 0; k < j; k++) {
        if (vows[k] == max_vows) {
            int c = max_index[k];
            while (str[c] && str[c] != ' ') {
                printf("%c", str[c]);
                c++;
            }
            printf("\n");
        }
    }
    return 0;
}
