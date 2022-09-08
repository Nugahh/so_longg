/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:39:46 by fwong             #+#    #+#             */
/*   Updated: 2022/09/08 16:36:50 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	ft_count_line(char *argv)
{

	int		count;
	int		fd;
	char	*map;
	
	count = 0;
	fd = open(argv, O_RDONLY);
	if (fd <= -1)
		return 0;
	map = get_next_line(fd);
	while (map) 
	{
		free(map);
		count++;
		map = get_next_line(fd);
	} 
	close(fd);
	return (count);
}