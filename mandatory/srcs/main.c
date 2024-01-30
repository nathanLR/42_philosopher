/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:47:21 by nle-roux          #+#    #+#             */
/*   Updated: 2024/01/30 10:48:12 by nle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static t_data	*ft_init_data(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	t_data	*data;

	data = (t_data *)malloc(sizeof(t_data) * 1);
	if (data == NULL)
		ft_manage_error(NULL, P_ERROR, NULL);
	return (data);	
}

int	main(int argc, char **argv)
{
	t_data	*data;

	argc--;
	argv++;
	ft_check_args(argc, argv);
	data = ft_init_data(argc, argv);
	ft_destroy_data(data);
	return (0);
}
