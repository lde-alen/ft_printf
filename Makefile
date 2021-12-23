# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/21 16:50:47 by lde-alen          #+#    #+#              #
#    Updated: 2021/12/21 16:50:49 by lde-alen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		libftprintf.a

LIBFT		=		./libft/libft.a

SRCS		=		./srcs/ft_printf_putchar.c		\
					./srcs/ft_putchar.c				\
					./srcs/ft_putstr.c				\
					./srcs/ft_printf_putstr.c		\
					./srcs/ft_printf_hexa.c			\
					./srcs/ft_printf_hexo.c			\
					./srcs/ft_strlen_hex.c			\
					./srcs/ft_asc_to_hex.c			\
					./srcs/ft_printf_percentage.c	\
					./srcs/ft_printf_ptr.c			\
					./srcs/ft_printf_putnbr.c		\
					./srcs/ft_printf_putnbr_u.c		\
					./srcs/ft_putnbr_un_base.c		\
					./srcs/ft_putnbr.c				\
					./srcs/ft_printf.c				\

SRCS_B		=

OBJS		=		$(SRCS:.c=.o)

OBJS_B		=		$(SRCS_B:.c=.o)

RM			=		rm -f

CP			=		cp

LIBC		=		ar -rcs

FLAGS		=		-Wall -Wextra -Werror

INCLUDES	+=		-I./includes/

.c.o		:
					$(CC) $(FLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

$(NAME)		:		$(OBJS)
					$(MAKE) -C ./libft
					$(CP) $(LIBFT) $(NAME)
					$(LIBC) $(NAME) $(OBJS)

all			:		$(NAME)

bonus		:		$(NAME) $(OBJS_B)
					$(LIBC) $(NAME) $(OBJS_B)

clean		:
					$(MAKE) clean -C ./libft
					$(RM) $(OBJS)

fclean		:		clean
					$(MAKE) fclean -C ./libft
					$(RM) $(NAME)

re			:		fclean all

.PHONY		:		all bonus clean fclean re .c.o
