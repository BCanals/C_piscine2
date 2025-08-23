#include <stdlib.h>
#include "../ex05/ft_show_tab.c"

int	ft_strlen(char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*rtrn;

	rtrn = malloc(sizeof(t_stock_str)*(ac + 1));
	i = -1;
	while (++i < ac)
	{
		rtrn[i].str = av[i];
		rtrn[i].copy = malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		ft_strcpy(rtrn[i].copy, av[i]);
		rtrn[i].size = ft_strlen(av[i]);
	}
	rtrn[i].str = 0;
	return (rtrn);
}

int main(int argc, char **argv)
{
	t_stock_str *p;

	p = ft_strs_to_tab(--argc, ++argv);
	ft_show_tab(p);
}
