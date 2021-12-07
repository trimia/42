#include<unistd.h>
char *ft_strcpy(char *dest, char *src);
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
    char b[50] = "vivivi";
    char c[50] = "ciao";
    ft_putstr(b);
    ft_putstr(c);
    ft_strcpy(c,b);
    ft_putstr(c);
    return(0);
}
