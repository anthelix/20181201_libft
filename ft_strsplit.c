/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 13:51:59 by schatagn          #+#    #+#             */
/*   Updated: 2018/12/03 16:20:45 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_word(char *s, char c)
	{
		int	i;
		int	nbr_word;
		
		nbr_word = 0;
		i = 0;
		if (s)
		{
			while (s[i] == c)
				s++;
			while ((s[i]))
			{
				if (i == 0 && s[i] != c)
					nbr_word++;
				else if (s[i] != c && s[i - 1] == c)
					nbr_word++;
				i++;
			}
		}
		return (nbr_word);
	}

char	**ft_strsplit(char const *s, char c)
{
	int		nbr_word;
	int		count_letter;
	int		i;
	char	**tab;
	
	count_letter = 0;
	i = 0;
	nbr_word = ft_count_word((char*)s, c);
	tab = NULL;
	if (( tab = (char**)malloc(nbr_word *sizeof(char*) + 1)))
	{
		while (i < nbr_word)
		{
			while (*s == c)
				s++;
			while (*s != c && *s)
			{
				count_letter++;
				s++;
			}
			tab[i] = ft_strsub(s - count_letter, 0, count_letter);
			i++;
			count_letter = 0;
		}
		tab[i] = NULL;
	}
	return (tab);
}
