/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 23:02:26 by aperez-b          #+#    #+#             */
/*   Updated: 2021/08/05 11:58:54 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/game.h"

t_sprite	ft_initsprites(t_game *g)
{
	int			size;

	size = SIZE;
	g->sprites.black = mlx_xpm_file_to_image(g->id, \
		"sprites/Other/Walls/black.xpm", &size, &size);
	g->sprites.black_font = mlx_xpm_file_to_image(g->id, \
		"sprites/Other/Fonts/black.xpm", &size, &size);
	g->sprites.wall = mlx_xpm_file_to_image(g->id, \
		"sprites/Other/Walls/wall.xpm", &size, &size);
	g->sprites.pacfood = mlx_xpm_file_to_image(g->id, \
		"sprites/Other/Pacdots/pacdot_food.xpm", &size, &size);
	g->sprites.portal = mlx_xpm_file_to_image(g->id, \
		"sprites/Other/Portal/portal.xpm", &size, &size);
	g->sprites.pacman = mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_closed.xpm", &size, &size);
	g->sprites.logo = mlx_xpm_file_to_image(g->id, \
		"sprites/Other/Logo/logo.xpm", &size, &size);
	g->sprites.pac_dying = ft_load_pacdeath(g);
	g->sprites.pac_dying_bak = g->sprites.pac_dying;
	return (g->sprites);
}

int	free_sprites(t_game *g)
{
	mlx_destroy_image(g->id, g->sprites.black);
	mlx_destroy_image(g->id, g->sprites.black_font);
	mlx_destroy_image(g->id, g->sprites.wall);
	mlx_destroy_image(g->id, g->sprites.pacfood);
	mlx_destroy_image(g->id, g->sprites.portal);
	mlx_destroy_image(g->id, g->sprites.pacman);
	mlx_destroy_image(g->id, g->sprites.logo);
	free_animation(g);
	return (0);
}

void	ft_put_map(t_game *g, int x, int y)
{
	if (g->map[y][x] == '1')
		mlx_put_image_to_window(g->id, g->w_id, g->sprites.wall, \
			x * SIZE, y * SIZE);
	if (g->map[y][x] == 'E')
		mlx_put_image_to_window(g->id, g->w_id, g->sprites.portal, \
			x * SIZE, y * SIZE);
	if (g->map[y][x] == 'C')
		mlx_put_image_to_window(g->id, g->w_id, g->sprites.pacfood, \
			x * SIZE, y * SIZE);
	if (g->map[y][x] == 'P')
		mlx_put_image_to_window(g->id, g->w_id, g->sprites.pacman, \
			x * SIZE, y * SIZE);
}
