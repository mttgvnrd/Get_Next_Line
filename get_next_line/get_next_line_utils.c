/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:16:18 by mgiovana          #+#    #+#             */
/*   Updated: 2022/11/25 15:22:30 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	if (!s)
		return (0);
	ch = (unsigned char)c;
	i = -1;
	while (*(s + ++i))
		if (ch == s[i])
			return ((char *)&s[i]);
	if (ch == '\0' && s[i] == ch)
		return ((char *)&s[i]);
	return (0);
}

char	*ft_strjoin(char *llist, char *buff)
{
	char	*nstr;
	size_t	i;
	size_t	j;

	if (!llist)
	{
		llist = malloc(1);
		llist[0] = '\0';
	}
	if (!llist || !buff)
		return (NULL);
	nstr = malloc(ft_strlen(llist) + ft_strlen(buff) + 1);
	if (!nstr)
		return (NULL);
	i = -1;
	while (llist[++i])
		nstr[i] = llist[i];
	j = 0;
	while (buff[j])
		nstr[i++] = buff[j++];
	nstr[i] = '\0';
	free (llist);
	return (nstr);
}

char	*ft_get_line(char *lline)
{
	int		i;
	char	*str;

	i = 0;
	if (!lline[i])
		return (NULL);
	while (lline[i] && lline[i] != '\n')
		i++;
	str = malloc(i + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (lline[i] && lline[i] != '\n')
	{
		str[i] = lline[i];
		i++;
	}
	if (lline[i] == '\n')
	{
		str[i] = lline[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_new_line(char *lline)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (lline[i] && lline[i] != '\n')
		i++;
	if (!lline[i])
	{
		free(lline);
		return (NULL);
	}
	str = malloc(ft_strlen(lline) - i + 1);
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (lline[i])
		str[j++] = lline[i++];
	str[j] = '\0';
	free (lline);
	return (str);
}
