/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_dir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:00:10 by aperez-b          #+#    #+#             */
/*   Updated: 2021/08/13 18:30:31 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/game.h"

t_list	*ft_load_north(t_game *g, char *path, int i)
{
	t_list	*anim;
	char	*s;

	anim = NULL;
	if (path)
	{
		s = ft_strjoin(path, "ghost_up1.xpm");
		ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
			s, &i, &i)));
		free(s);
		s = ft_strjoin(path, "ghost_up2.xpm");
		ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
			s, &i, &i)));
		free(s);
		return (anim);
	}
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_semi_up.xpm", &i, &i)));
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_open_up.xpm", &i, &i)));
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_semi_up.xpm", &i, &i)));
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_closed.xpm", &i, &i)));
	return (anim);
}

t_list	*ft_load_south(t_game *g, char *path, int i)
{
	t_list	*anim;
	char	*s;

	anim = NULL;
	if (path)
	{
		s = ft_strjoin(path, "ghost_down1.xpm");
		ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
			s, &i, &i)));
		free(s);
		s = ft_strjoin(path, "ghost_down2.xpm");
		ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
			s, &i, &i)));
		free(s);
		return (anim);
	}
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_semi_down.xpm", &i, &i)));
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_open_down.xpm", &i, &i)));
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_semi_down.xpm", &i, &i)));
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_closed.xpm", &i, &i)));
	return (anim);
}

t_list	*ft_load_east(t_game *g, char *path, int i)
{
	t_list	*anim;
	char	*s;

	anim = NULL;
	if (path)
	{
		s = ft_strjoin(path, "ghost_right1.xpm");
		ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
			s, &i, &i)));
		free(s);
		s = ft_strjoin(path, "ghost_right2.xpm");
		ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
			s, &i, &i)));
		free(s);
		return (anim);
	}
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_semi_right.xpm", &i, &i)));
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_open_right.xpm", &i, &i)));
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_semi_right.xpm", &i, &i)));
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_closed.xpm", &i, &i)));
	return (anim);
}

t_list	*ft_load_west(t_game *g, char *path, int i)
{
	t_list	*anim;
	char	*s;

	anim = NULL;
	if (path)
	{
		s = ft_strjoin(path, "ghost_left1.xpm");
		ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
			s, &i, &i)));
		free(s);
		s = ft_strjoin(path, "ghost_left2.xpm");
		ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
			s, &i, &i)));
		free(s);
		return (anim);
	}
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_semi_left.xpm", &i, &i)));
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_open_left.xpm", &i, &i)));
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_semi_left.xpm", &i, &i)));
	ft_lstadd_back(&anim, ft_lstnew(mlx_xpm_file_to_image(g->id, \
		"sprites/Pac-Man/pac_closed.xpm", &i, &i)));
	return (anim);
}