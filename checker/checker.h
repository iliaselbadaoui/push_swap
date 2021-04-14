/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:52:17 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/13 19:55:46 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# include <fcntl.h>
# include "../utils/utils.h"
# define BUFFER_SIZE 4096

char		*ft_strchr(const char *s, int c);
int			ft_strlen(const char *str);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(const char *s);
void		ft_free(char **p);
void		fill_line(char **line, char *buffer);
int			process_line(char **line, char **remain);
int			process_remain(char **remain, char **line);
int			in(int fd, char **line);
#endif
