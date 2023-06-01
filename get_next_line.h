/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabdli <cabdli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 23:47:55 by cabdli            #+#    #+#             */
/*   Updated: 2023/06/01 15:16:31 by cabdli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);

#endif