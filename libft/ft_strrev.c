/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 10:00:07 by mxaba             #+#    #+#             */
/*   Updated: 2018/08/31 10:00:09 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	char	temp;
	int		i;
	int		j;

	j = strlen(s);
	i = 0;
	while (i < (j - 1))
	{
		temp = s[i];
		s[i] = s[j - 1];
		s[j - 1] = temp;
		j--;
		i++;
	}
	return (s);
}
