/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:32:27 by nle-roux          #+#    #+#             */
/*   Updated: 2024/01/30 10:32:50 by nle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

size_t	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (fd < 0)
		return (0);
	len = 0;
	if (!s)
		return (ft_putstr_fd("(null)", fd));
	while (*s)
		len += ft_putchar_fd(*s++, fd);
	return (len);
}

