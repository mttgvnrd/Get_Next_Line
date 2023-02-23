/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:26:59 by mgiovana          #+#    #+#             */
/*   Updated: 2022/11/28 11:27:32 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *lline);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *s);
char	*ft_get_line(char *lline);
char	*ft_new_line(char *lline);

#endif
