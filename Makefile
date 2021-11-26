# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahakam <ahakam@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 19:00:23 by ahakam            #+#    #+#              #
#    Updated: 2021/11/26 00:49:09 by ahakam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_itoa.c ft_memcmp.c ft_memcpy.c ft_memset.c ft_putendl_fd.c ft_putstr_fd.c  ft_strchr.c ft_striteri.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_substr.c ft_toupper.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memmove.c ft_putchar_fd.c ft_putnbr_fd.c  ft_split.c ft_strdup.c ft_strjoin.c ft_strlcpy.c ft_strmapi.c ft_strnstr.c ft_strtrim.c ft_tolower.c 

BFILES = ft_lstadd_back_bonus.c ft_lstmap_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c  ft_lstnew_bonus.c ft_lstsize_bonus.c 

OBJS = ft_putchar_fd.o ft_atoi.o ft_itoa.o ft_isdigit.o ft_isalpha.o ft_memcmp.o ft_memcpy.o ft_memset.o ft_putendl_fd.o ft_putstr_fd.o ft_strchr.o ft_striteri.o ft_strlcat.o ft_strlen.o ft_strncmp.o ft_strrchr.o ft_substr.o ft_toupper.o ft_bzero.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_memchr.o ft_memmove.o ft_calloc.o ft_putchar_fd.o ft_putnbr_fd.o ft_split.o ft_strdup.o ft_strjoin.o ft_strlcpy.o ft_strmapi.o ft_strnstr.o ft_strtrim.o ft_tolower.o 

OBJSB = ft_lstadd_back_bonus.o ft_lstmap_bonus.o ft_lstadd_front_bonus.o ft_lstclear_bonus.o ft_lstdelone_bonus.o ft_lstiter_bonus.o ft_lstlast_bonus.o ft_lstnew_bonus.o ft_lstsize_bonus.o 

NAME = libft.a

BONUS = libft.a

CC = gcc 

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra -c

all : $(NAME)

bonus : $(OBJSB)

$(NAME):
	$(CC) $(CFLAGS) $(CFILES)
	ar rc $(NAME) $(OBJS)
		
$(OBJSB):
	$(CC) $(CFLAGS) $(BFILES)
	ar rc $(NAME) $(OBJSB)
	
		
clean : 
			${RM} ${OBJS} ${OBJSB}
fclean : 	clean 
			${RM} ${NAME} ${bonus}
re : fclean all
