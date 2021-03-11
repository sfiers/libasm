/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssimon <ssimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:11:52 by ssimon            #+#    #+#             */
/*   Updated: 2020/10/29 12:11:54 by ssimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

size_t		ft_strlen(char *rdi);
char		*ft_strcpy(char *rdi, const char *rsi);
int			ft_strcmp(const char *rdi, const char *rsi);
ssize_t		ft_write(int rdi, const void *rsi, size_t rdx);
ssize_t		ft_read(int rdi, void *rsi, size_t rdx);
char		*ft_strdup(const char *rdi);

#endif
