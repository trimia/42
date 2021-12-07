#include <stdio.h>
int	ft_str_is_uppercase(char *str);

int	main()
{
	char *a;
	char *b;
	char c[]={'\0','\0'};

	a = "ABDFNKFNSD";
	b = "h4355hasd"; 
	
	printf("%d\n%d\n%d", ft_str_is_uppercase(a),ft_str_is_uppercase(b),ft_str_is_uppercase(c));

}
