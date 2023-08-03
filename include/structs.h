/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonpeat <mmonpeat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:29:04 by mmonpeat          #+#    #+#             */
/*   Updated: 2023/08/03 18:42:33 by mmonpeat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL
# define FRACTOL

# include <mlx.h>

//MACROS
# define W 1000
# define H 900

typedef struct s_win
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		w;
	int		h;
}		t_win;

typedef struct s_img
{
	t_win	win;
	void	*img_ptr;
	char	*addr;
	int		w;
	int		h;
	int		bpp;//bites_per_pixel
	int		endian;
	int		line_len;
}		t_img;

typedef struct s_complex_plane
{
	t_img				*img_ptr;
	void				(*fractal_function)(struct s_complex_plane *);
	int					i;//iteracions per pixel
	int					row;
	int					col;
	double				x;
	double				x_e;
	double				y;
	double				y_e;
	double				re;//num complex
	double				im;//num complex
	char				*name;
}			t_cplane;

typedef struct s_moves
{
	double	x;
	double	y;
	double	z;
	int		i;//quantitat d'iterracions aug i dism
}		t_mv;

typedef struct s_mouse_pos
{
	double		x;
	double		y;
}	t_mouse_pos;

typedef struct s_all
{
	t_win		wind;
	t_img		img;
	t_cplane	fractal;
	t_mv		mv;
	t_mouse_pos	mouse;
}		t_all;

#endif