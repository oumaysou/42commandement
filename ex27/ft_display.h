/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:04:34 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/12 16:11:59 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_H
# define FT_DISPLAY_H

# include <unistd.h>

# include <sys/types.h>

# include <sys/stat.h>

# include <fcntl.h>

# define BUF_SIZE 4096

void	ft_putstr(char *str);

void	ft_display(char *file);

#endif
