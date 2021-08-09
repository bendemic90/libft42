#include <string.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_strlen("Hello"));
    return (0);
}