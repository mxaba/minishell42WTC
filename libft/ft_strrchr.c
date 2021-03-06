/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 09:59:57 by mxaba             #+#    #+#             */
/*   Updated: 2018/08/31 10:00:15 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ans;
	int		i;

	i = ft_strlen(s);
	ans = 0;
	while (i >= 0)
	{
		if (*s == (char)c)
			ans = (char*)s;
		s++;
		i--;
	}
	return (ans);
}
