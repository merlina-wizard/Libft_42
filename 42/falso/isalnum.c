#include <unistd.h>

int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return (1);
    else if (c >= 'A' && c <= 'Z')
        return (2);
    else
        return (0);
}
