/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_utilities.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:13:18 by nle-roux          #+#    #+#             */
/*   Updated: 2024/01/30 10:42:09 by nle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	ft_manage_error(char *e_m, t_uint type, t_data *data)
{
	if (type == U_ERROR)
		ft_putendl_fd(e_m, STDERR_FILENO);
	else if (type == P_ERROR)
		ft_putendl_fd("EXEC ERROR", STDERR_FILENO);
	ft_destroy_data(data);
}

void	ft_destroy_data(t_data *data)
{
	if (data != NULL)
		free(data);
}

void	ft_check_args(int argc, char **argv)
{
	(void)argc;
	(void)argv;
}
