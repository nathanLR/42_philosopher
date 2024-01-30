/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_utilities.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:13:18 by nle-roux          #+#    #+#             */
/*   Updated: 2024/01/30 13:27:29 by nle-roux         ###   ########.fr       */
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

t_bool	ft_check_args(int argc, char **argv)
{
	if (argc < 4 || argc > 5)
	{
		ft_manage_error("Usage: ./philo number_of_philosophers time_to_die \
time_to_eat time_to_sleep \
[number_of_times_each_philosopher_must_eat]", U_ERROR, NULL);
		return (FALSE);
	}
	if (ft_atoi(argv[0]) < 1 || ft_atoi(argv[0]) > 200)
	{
		ft_manage_error("Error: The number of philosophers must be greater \
than 1.", U_ERROR, NULL);
		return (FALSE);
	}
	if (ft_atoi(argv[1]) <= 0 || ft_atoi(argv[2]) <= 0 || ft_atoi(argv[3]) <= 0)
	{
		ft_manage_error("Error: The time to eat/sleep/die must be at least \
1ms.", U_ERROR, NULL);
		return (FALSE);
	}
	if (argc == 5 && ft_atoi(argv[4]) < 1)
	{
		ft_manage_error("Erorr: if [number_of_times_each_philosopher_must_eat] \
is provided, then it should be at least 1.", U_ERROR, NULL);
		return (FALSE);
	}
	return (TRUE);
}
