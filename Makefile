SRCS	= ft_isprint.c ft_toupper.c ft_tolower.c int ft_isascii.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a 

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

${NAME}:	$(OBJS)	
	ar rcs ${NAME} ${OBJS}

%.o : %.c
	${CC}$(FLAGS) -c $< -o $@
 
all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re