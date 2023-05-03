/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-garr <mel-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:07:10 by mel-garr          #+#    #+#             */
/*   Updated: 2023/05/03 16:09:24 by mel-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bu.h"

void    ft_write_fd(int fd, char c)
{
    write(fd, &c, 1);
}

void    ft_print_fd(int fd, char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_write_fd(fd, str[i]);
        i++;
    }
}

