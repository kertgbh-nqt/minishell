/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_echo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-garr <mel-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:44:40 by mel-garr          #+#    #+#             */
/*   Updated: 2023/05/03 16:23:41 by mel-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bu.h"


int print_args(char **str, int i)
{
    if (str[i][0] == '\0' && ! str[i + 1])
        return (0);
    while (str[i])
    {
            ft_print_fd(1, str[i]);
            if (str[i + 1])
                    write(1, " ", 1);

        i++;
    }
    return (0);
}

int no_line(char *str)
{
    int i;

    i = 2;
    if (str[0] != '-' || str[1] != 'n')
        return (0);
    while (str[i] == 'n')
        i++;
    if (str[i] != '\0')
        return (0);
    return (1);
}

int cmd_echo(char **str)
{
    int i;
    int signe;

    signe = 0;
    i = 1;
    if (!str[i])
    {
        write(1, "\n", 1);
        return (0);
    }
    while (str[i] && no_line(str[i]))
    {
        i++;
        signe = 1;
    }
    print_args(str, i);
    if (signe == 0)
        write(1, "\n", 1);
    return (0);
}

int main(int ac, char **av)
{
    (void )ac;
    cmd_echo(av);
}