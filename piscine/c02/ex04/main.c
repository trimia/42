#include <stdio.h>
int	ft_str_is_lowercase(char *str);
int	main()
{
	char *a;
	char *b;
	char c[0];

	a = "AdsfGfgkdksk;gj";
	b = "ofjdsgjfg";
	printf("%d",ft_str_is_lowercase(a));
	printf("%d",ft_str_is_lowercase(b));
	printf("%d",ft_str_is_lowercase(c));
}
