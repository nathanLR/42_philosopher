/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utilities.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:38:49 by nle-roux          #+#    #+#             */
/*   Updated: 2024/01/30 13:43:42 by nle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static t_data	*ft_init_data(int argc, char **argv)
{
	t_data	*data;

	data = (t_data *)malloc(sizeof(t_data) * 1);
	if (data == NULL)
		ft_manage_error(NULL, P_ERROR, NULL);
	/*data->philos_num = ft_atoi(argv[0]);
	data->time_to_die = ft_atoi(argv[1]);
	data->time_to_eat = ft_atoi(argv[2]);
	data->time_to_sleep = ft_atoi(argv[3]);
	*/
	data->philos = NULL;
	data->dead_flag = 0;
	if (argc == 5)
		data->mandatory_eating = ft_atoi(argv[4]);
	return (data);
}
