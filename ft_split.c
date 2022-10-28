/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:00:05 by ohaimad           #+#    #+#             */
/*   Updated: 2022/10/28 05:10:55 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	void	freeall(char **s, int len)
{
	int	i;

	i = 0;
	while (len--)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static int	nbrofwords(char const *s, char c)
{
	int	nbr;
	int	i;

	nbr = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			nbr++;
			i++;
		}
		if (*s == c)
			i = 0;
		s++;
	}
	return (nbr);
}

struct s_split
{
	int			pi;
	char		**p;
	char const	*s;
	char		c;
	int			w;
	int			skip;
	int			line;
};

static	char	**added(struct s_split *z)
{
	while (z->pi < z->w)
	{
		if (*z->s != z->c && z->skip == 0)
		{
			z->skip = 1;
			z->line = 0;
		}
		if ((*z->s == z->c && z->skip == 1) || *z->s == '\0')
		{
			z->p[z->pi] = malloc(z->line + 1);
			if (!z->p[z->pi])
			{
				freeall(z->p, z->w);
				return (NULL);
			}
			ft_strlcpy(z->p[z->pi], z->s - z->line, z->line + 1);
			z->skip = 0;
			z->pi++;
		}
		z->s++;
		z->line++;
	}
	z->p[z->pi] = NULL;
	return (z->p);
}

char	**ft_split(char const *s, char c)
{
	struct s_split	z;

	z.s = s;
	z.c = c;
	if (!z.s)
		return (NULL);
	z.skip = 0;
	z.w = nbrofwords(z.s, z.c);
	z.pi = 0;
	z.line = 0;
	z.p = (char **)malloc((z.w + 1) * sizeof(char *));
	if (!z.p)
		return (NULL);
	added(&z);
	return (z.p);
}
int main()
{
    int i = 0;
    char **jk;
    char *s = "--ab-cdd-ef";
    char c = '-';
    jk = ft_split(s, c);
    while (jk[i])
    {
        printf("%s\n", jk[i]);
        i++;
    }
    return 0;
}