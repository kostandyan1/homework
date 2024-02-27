#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *input_text;
    char *output_text;
    int i = 0;
    int j = 0;
    int key;
    if (argc != 3)
    {
        printf("Error\n");
        return (-1);
    }
    key = atoi(argv[2]);
    while (key > 26)
        key -= 26;
    printf("Key: %d\n", key);
    i = 0;
    while (argv[1][i] != '\0')
        i++;
    input_text = (char *)malloc(sizeof(char) * i + 1);
    output_text = (char *)malloc(sizeof(char) * i + 1);
    if (!input_text || !output_text)
    {
        printf("Error");
        return (-1);
    }
    i = 0;
    while (argv[1][i] != '\0')
    {
        input_text[i] = argv[1][i];
        i++;
    }
    input_text[i] = '\0';
    printf("%s\n", input_text);
    while (j < i)
    {
        if (input_text[j] + key >= 122)
            output_text[j] = input_text[j] - 26 + key;
        else 
            output_text[j] = input_text[j] + key;
        j++; 
    }
    output_text[j] = '\0';
    printf("%s\n", output_text);
    free(input_text);
    free(output_text);
    return (0);
}