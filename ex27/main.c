/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:47:50 by fgaujard          #+#    #+#             */
/*   Updated: 2018/11/12 14:01:54 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	char	c;
	int		file;

	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	file = open(av[1], O_RDONLY);
	if (file == -1)
		write(2, "Impossible d'ouvrir le fichier.\n", 32);
	while (read(file, &c, 1) > 0)
		write(1, &c, 1);
	close(file);
	return (0);
}
