#include "../headers/test.h"

int	close_window(void *param)
{
	t_data *data = (t_data*)param;

	mlx_destroy_image(data->mlx, data->img_floor);
	mlx_destroy_image(data->mlx, data->img_wall);
	mlx_destroy_image(data->mlx, data->img_exit);
	// mlx_destroy_image(data->mlx, data->img_ball);
	mlx_destroy_window(data->mlx, data->mlx_win);
	exit(0);
}

int key_press(int keycode, t_data *data)
{
    if (keycode == 53)
        close_window(data);
    return 0;
}

int	main(void)
{
	t_data	data;

	data.height = malloc(sizeof(int));
	data.width = malloc(sizeof(int));
	*data.height = 40;
	*data.width = 40;
	data.mlx = mlx_init();
	data.mlx_win = mlx_new_window(data.mlx, 640, 480, "test");
	data.img_floor = mlx_xpm_file_to_image(data.mlx, "./assets/floor.xpm", data.width, data.height);
	data.img_wall = mlx_xpm_file_to_image(data.mlx, "./assets/wall.xpm", data.width, data.height);
	data.img_exit = mlx_xpm_file_to_image(data.mlx, "./assets/exit.xpm", data.width, data.height);
	data.img_ball = mlx_xpm_file_to_image(data.mlx, "./assets/ball.xpm", data.width, data.height);
	mlx_put_image_to_window(data.mlx, data.mlx_win, data.img_floor, 0, 0);
	mlx_put_image_to_window(data.mlx, data.mlx_win, data.img_wall, 40, 0);
	mlx_put_image_to_window(data.mlx, data.mlx_win, data.img_exit, 80, 0);
	// mlx_put_image_to_window(data.mlx, data.mlx_win, data.img_ball, 120, 0);
	// mlx_hook(data.mlx_win, 17, 0, close_window, &data);
	mlx_hook(data.mlx_win, 2, 0, key_press, &data);
	mlx_mouse_hide();
	mlx_loop(data.mlx);
	free(data.height);
	free(data.width);
	return (0);
}









// void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
// {
// 	char	*dst;

// 	dst = data->adr + (y * data->line_length + x * (data->bits_per_pixel / 8));
// 	*(unsigned int*)dst = color;
// }

// void draw_horizontal_line(t_data *data, int x1, int x2, int y, int color)
// {
//     for (int x = x1; x <= x2; x++)
//     {
//         my_mlx_pixel_put(data, x, y, color);
//     }
// }

// void draw_filled_circle(t_data *data, int xc, int yc, int radius, int color)
// {
//     int x = radius;
//     int y = 0;
//     int radiusError = 1 - x;

//     while (x >= y)
//     {
//         draw_horizontal_line(data, xc - x, xc + x, yc + y, color);
//         draw_horizontal_line(data, xc - y, xc + y, yc - x, color);
//         draw_horizontal_line(data, xc - x, xc + x, yc - y, color);
//         draw_horizontal_line(data, xc - y, xc + y, yc + x, color);
//         y++;
// 		color += 1000;
//         if (radiusError < 0)
//             radiusError += 2 * y + 1;
//         else
//         {
//             x--;
//             radiusError += 2 * (y - x) + 1;
//         }
//     }
// }

// void	draw_rectangle(t_data *data, int x, int y, int color)
// {
// 	int i;
// 	int j;

// 	i = x;
// 	j = y;
// 	while (i < 100)
// 	{
// 		while (j < 100)
// 		{
// 			my_mlx_pixel_put(data, i, j, color);
// 			j++;
// 		}
// 		j = y;
// 		color += 5;
// 		i++;
// 	}
// }

// void generate_texture(t_data *data)
// {
//     int width = 1366;
//     int height = 768;

//     for (int x = 0; x < width; x++)
//     {
//         for (int y = 0; y < height; y++)
//         {
//             int red = x * 255 / width;
//             int green = y * 255 / height;
//             int blue = 0;
//             int color = (red << 16) | (green << 8) | blue;
//             my_mlx_pixel_put(data, x, y, color);
//         }
//     }
// }
