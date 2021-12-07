#include<stdio.h>
void ft_sort_int_tab(int *tab, int size);
int main()
{
	int i=0;
    int tab[] = {64, 34, 25, 12, 22, 11, 90};
    ft_sort_int_tab(tab, 7);
	while (i <= 6)
	{
		printf("%d ",tab[i]);
		i++;
	}
}
