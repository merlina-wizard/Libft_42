#include <unistd.h>

int ft_isalpha(int c)
{
    if (c >= 'a' && c <= 'z')        return (1);
    else if (c >= 'A' && c <= 'Z')
        return (2);
    else
        return (0);
}