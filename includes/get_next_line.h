/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrichese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:46:30 by vrichese          #+#    #+#             */
/*   Updated: 2019/06/27 16:20:09 by vrichese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 10

# include <fcntl.h>
# include "libft.h"

typedef struct		s_mylist
{
	int				fd;
	char			*inter_str;
	struct s_mylist	*next;
}					t_mylist;

int					get_next_line(const int fd, char **line);

#endif