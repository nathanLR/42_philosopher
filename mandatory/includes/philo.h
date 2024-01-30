/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:40:47 by nle-roux          #+#    #+#             */
/*   Updated: 2024/01/30 13:47:06 by nle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
# define P_ERROR 0
# define U_ERROR 1
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <mini_libft.h>
# include <pthread.h>

typedef unsigned int	t_uint;
typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;
typedef struct s_philo
{
	pthread_t	thread;
	int			philo_id;
	int			time_to_die;
	int			time_to_eat;
	int			time_to_sleep;
	int			mandatory_eating;

}

typedef struct s_data
{
	int		dead_flag;
	t_philo	**philos;
}	t_data;
void	ft_init_data(int argc, char **argv);
void	ft_init_philos(t_data *data);
void	ft_manage_error(char *e_m, t_uint type, t_data *data);
void	ft_destroy_data(t_data *data);
t_bool	ft_check_args(int argc, char **argv);
#endif
