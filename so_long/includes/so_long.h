/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:54:49 by fwong             #+#    #+#             */
/*   Updated: 2022/09/08 21:30:37 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include "../libft/get_next_line.h"

typedef struct s_data
{
	void	*mlx;
	void	*win;
	void	*P_IMG;
	void	*W_IMG;
	void	*C_IMG;
	void	*BG_IMG;
	char	**map;
	char	**map_fill;
	int		collectible;
	int		x;
	int		y;
	int		step_count;
}	t_data;

typedef struct s_utils
{
	int	*line_len;
	int	nb_line;
}	t_utils;

void	get_map(t_data *data, char *argv);
int		ft_count_line(char *argv);
int	ft_check_each(t_data *data, char *argv);
int	ft_check_wall(t_data *data, char *argv);
int	ft_check_rectangle_map(t_data *data, char *argv);


#endif