/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:05:29 by witong            #+#    #+#             */
/*   Updated: 2024/05/16 16:47:41 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(char *file)
{
	char	buffer[256];
	int		fd;
	int		bytesread;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	bytesread = 1;
	while (bytesread > 0)
	{
		bytesread = read(fd, buffer, sizeof(buffer));
		write(1, buffer, bytesread);
	}
	if (bytesread == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else
		ft_display_file(av[1]);
	return (0);
}
