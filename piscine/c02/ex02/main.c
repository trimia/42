#include <unistd.h>
int ft_str_is_alpha(char *str);
int main()
{
    int esito_b;
    int esito_c;
    int esito_b_stampabile;
    int esito_c_stampabile;
    char b[50] = "DZHdchdhcfdl";
    char c[50] = "ghjg*dfktydfhktf";
    
    esito_b = ft_str_is_alpha(b);
    esito_c = ft_str_is_alpha(c);
    esito_b_stampabile = esito_b + 48;
    esito_c_stampabile = esito_c + 48;
    write(1,&esito_b_stampabile,1);
    write(1,"\n",1);
    write(1,&esito_c_stampabile,1);
}

