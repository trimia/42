#include <string.h>
#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int main() {
	unsigned int i =3;
	char dest[]= "pippooooooo";
	char src[] = "plutoao";
	unsigned int h;
	h=strlcpy(dest,src,i);
	printf ("%d\n",h);
	printf("%d\n",ft_strlcpy(dest,src,i));
}
