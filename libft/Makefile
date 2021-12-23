# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-alen <lde-alen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/26 13:17:12 by lde-alen          #+#    #+#              #
#    Updated: 2021/10/27 22:50:57 by lde-alen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   libft.a

SRCS	=	ft_bzero.c			\
			ft_calloc.c			\
			ft_memset.c			\
			ft_strlen.c			\

OBJS	= $(SRCS:.c=.o)

RM		= rm -f

LIBC	= ar -rcs

FLAGS	= -Wall -Wextra -Werror

INCLUDES	+= -I../includes/

.c.o	:
			$(CC) $(FLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

$(NAME)	: 	$(OBJS)
			$(LIBC) $(NAME) $(OBJS)

all		:	$(NAME)

fclean	:	clean
			$(RM) $(NAME) $(bonus)

clean	:
			$(RM) $(OBJS) $(OBJS_B)

re		:	fclean all

.PHONY	:	all bonus clean fclean re .c.o
