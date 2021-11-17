
SRCS	=	\
			main.c			\
			ft_putchar.c	\
			ft_putstr.c		\
			ft_strlen.c		\
			ft_putnbr_fd.c

SRCSD	= srcs/

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC		= gcc -c -o
LINKER	= ar rcs
RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			${LINKER} ${NAME} ${OBJS}

all:		${NAME}

${OBJSD}%.o:    ${SRCSD}%.c
	${CC} $@ $^ ${CFLAGS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
