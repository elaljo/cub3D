/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_directions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 00:11:46 by moelalj           #+#    #+#             */
/*   Updated: 2023/11/10 00:11:47 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	check_valid_directions(t_data *data)
{
	data->c = 0;
	int	i;

	i = 0;
	while (data->map_info.str[i])
	{
		if (!ft_strncmp(data->map_info.str[i], "NO ", 3))
			data->c++;
		else if (!ft_strncmp(data->map_info.str[i], "SO ", 3))
			data->c++;
		else if (!ft_strncmp(data->map_info.str[i], "WE ", 3))
			data->c++;
		else if (!ft_strncmp(data->map_info.str[i], "EA ", 3))
			data->c++;
		else if (!ft_strncmp(data->map_info.str[i], "F ", 2))
			data->c++;
		else if (!ft_strncmp(data->map_info.str[i], "C ", 2))
			data->c++;
		i++;
	}
	if (data->c != 6)
		print_err_directions();
}
void	check_directions_needs(t_data *data)
{
	check_NO_n(data);
	check_SO_n(data);
	check_WE_n(data);
	check_EA_n(data);
	check_F_n(data);
	check_C_n(data);
}
void	check_colors(t_data *data)
{
	check_F_c(data);
	check_C_c(data);
}