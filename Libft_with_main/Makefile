# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunze <hyunze@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/12 20:32:18 by hann              #+#    #+#              #
#    Updated: 2020/08/16 15:24:05 by hyunze           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

/*
SRCS는 part1과 part2에 해당하는 함수들을 지칭한다.
*/

SRCS	= ./ft_memset.c \
		  ./ft_bzero.c \
		  ./ft_memcpy.c \
		  ./ft_memcpy.c \
		  ./ft_memmove.c \
		  ./ft_memchr.c \
		  ./ft_memcmp.c \
		  ./ft_strlen.c \
		  ./ft_strlcpy.c \
		  ./ft_strlcat.c \
		  ./ft_strchr.c \
		  ./ft_strrchr.c \
		  ./ft_strnstr.c \
		  ./ft_strncmp.c \
		  ./ft_atoi.c \
		  ./ft_isalpha.c \
		  ./ft_isdigit.c \
		  ./ft_isalnum.c \
		  ./ft_isascii.c \
		  ./ft_isprint.c \
		  ./ft_tolower.c \
		  ./ft_toupper.c \
		  ./ft_substr.c \
		  ./ft_calloc.c \
		  ./ft_memccpy.c \
		  ./ft_strdup.c \
		  ./ft_strjoin.c \
		  ./ft_strtrim.c \
		  ./ft_split.c \
		  ./ft_itoa.c \
		  ./ft_strmapi.c \
		  ./ft_putchar_fd.c \
		  ./ft_putstr_fd.c \
		  ./ft_putendl_fd.c \
		  ./ft_putnbr_fd.c \

/*
SRCS_B는 bonus part에 해당하는 함수들을 지칭한다.
*/

SRCS_B	= ./ft_lstnew.c \
		  ./ft_lstadd_front.c \
		  ./ft_lstsize.c \
		  ./ft_lstlast.c \
		  ./ft_lstadd_back.c \
		  ./ft_lstdelone.c \
		  ./ft_lstclear.c \
		  ./ft_lstiter.c \
		  ./ft_lstmap.c \
          
/*
변수들을 선언하는 부분이다. .c=.o는 .c파일을 .o로 치환해준다는 뜻이다.
*/

NAME	= libft.a
OBJS	= $(SRCS:.c=.o)
OBJS_B  = $(SRCS_B:.c=.o)
RM		= rm -f
LIBC	= ar rc
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

/*
.o파일을 만들 때 .c를 사용하겠다는 규칙이다.
*/

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I
    
/*
NAME을 생성하게 되면 오브젝트파일로 정적라이브러리를 만든다.
*/

$(NAME) : $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

/*
all은 NAME, 즉, libft.a를 의미함.
*/

all : $(NAME)

/*
보너스를 실행시키면 OBJS_B에 있는 함수들로 NAME을 생성한다.
*/
bonus : $(NAME) $(OBJS_B)
	$(LIBC) $(NAME) $(OBJS_B)

/*
make clean을 할 경우 생성된 오브젝트파일들을 삭제한다.
*/

clean :
	$(RM) $(OBJS) $(OBJS_B)
    
/*
make fclean을 할 경우 clean을 하고, libft.a와 bonus를 삭제한다.
*/

fclean : clean
	$(RM) $(NAME) $(bonus)
    
/*
make re를 할 경우 fclean을 하고 새로 만든다.
*/

re : fclean all
