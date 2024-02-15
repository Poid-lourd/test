# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcardin <pcardin@student.42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 09:29:57 by pcardin           #+#    #+#              #
#    Updated: 2023/12/04 15:38:32 by pcardin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NOM = libmlx.a

SRC = \
	mlx_shaders.c mlx_new_window.m mlx_init_loop.m \
	mlx_new_image.m mlx_xpm.c mlx_int_str_to_wordtab.c

SRC+= mlx_png.c mlx_mouse.m
OBJ1=$(SRC:.c=.o)
OBJ=$(OBJ1:.m=.o)
CFLAGS+=-O2 -w

# add to match string put with X11 in size and position
CFLAGS+= -DSTRINGPUTX11

all: $(NOM)

$(NOM):	$(OBJ)
	ar -r $(NOM) $(OBJ)
	ranlib $(NOM)

clean:
	rm -f $(NOM) $(OBJ) *~
	rm -f mlx_app

re: clean all
