/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:47:21 by nle-roux          #+#    #+#             */
/*   Updated: 2024/01/30 13:38:39 by nle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>


int	main(int argc, char **argv)
{
	t_data	*data;

	argc--;
	argv++;
	if (ft_check_args(argc, argv) == FALSE)
		return (EXIT_FAILURE);
	data = ft_init_data(argc, argv);
	ft_destroy_data(data);
	return (0);
}
