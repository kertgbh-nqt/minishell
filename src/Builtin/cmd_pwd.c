/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_pwd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-garr <mel-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:28:13 by mel-garr          #+#    #+#             */
/*   Updated: 2023/05/04 16:39:18 by mel-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bu.h"

int cmd_pwd(char **str)
{
    int i;

    i = 0;
    if (!str)
        return (1);
    while (str[i])
    {
        if (str[i][0] == 'P' && str[i][1] == 'W' && str[i][2] == 'D' && str[i][3] == '=')
            {
                ft_print_fd(1, str[i]);
                ft_print_fd(1, "\n");
                return (0);
            }
            i++;
    }
    return (1);
}

int main(int ac, char **av, char **env)
{
    if (ac == 1)
        cmd_pwd(env);
    else
    {
        ft_print_fd(2, "pwd: too many arguments\n");
        return (1);
    }
}
