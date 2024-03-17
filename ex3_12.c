#include <stdio.h>

int	main(void)
{
	char	str[100] = "   Hello    world!   dd    ddddd     ggg";

	int i, j, temp;
	i = 0;
	while (str[i] == ' ')
		i++;
	if (i > 0)
	{
		j = 0;
		while (str[i])
		{
			str[j++] = str[i++];
		}
		str[j] = '\0';
	}
	i = 0;
	while (str[i])
		i++;
	while (i > 0 && str[i - 1] == ' ')
	{
		str[i - 1] = '\0';
		i--;
	}
	i = 0;
	while (str[i]) {
        if (str[i] == ' ') {
            i++;
            temp = i;
            j = i + 1;
            while (str[j] == ' ')
                j++;
            while (str[j]) {
                str[temp++] = str[j++];
            }
            str[temp] = '\0';
        }
        i++;
    }
	printf("%s\n", str);
	return (0);
}
