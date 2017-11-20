/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:03:00 by grota             #+#    #+#             */
/*   Updated: 2017/11/20 13:03:01 by grota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[0])
	{
		while (i < n && s1[i])
		{
			while (i < n && s1[i] && s1[i] != s2[j])
				i++;
			while (i < n && s1[i] && s2[j] && s1[i] == s2[j])
			{
				i++;
				j++;
			}
			if (s2[j] == '\0')
				return (&s1[i - j]);
			else
			{
				i++;
				j = 0;
			}
		}
	}
	return (NULL);
}
