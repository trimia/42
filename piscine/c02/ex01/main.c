#include<unistd.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);
void    ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != 0)
    {
        write(1, &str[i], 1);
    i++;
    }
    write(1, "\n", 1);
}
int main()
{
    char c[50] = "vivivi";
    char b[50] = "ciao";
    ft_putstr(b);
    ft_putstr(c);
    ft_strncpy(c,b,3);
    ft_putstr(c);
    return(0);
}
