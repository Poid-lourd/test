#ifndef TEST_H
# define TEST_H

# define HEIGHT = 40;
# define WIDTH = 40;

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include "../minilibx/mlx.h"

typedef struct	s_data
{
	void	*mlx;
	void	*mlx_win;
	void	*img_floor;
	void	*img_wall;
	void	*img_exit;
	void	*img_ball;
	int		*height;
	int		*width;
	
}			t_data;

#endif
