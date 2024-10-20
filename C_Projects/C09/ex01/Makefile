SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJECTS = ${SOURCES:.c=.o}
INCLUDES = includes
NAME = libft.a
LIBCREATE = ar rc
RANLIB = ranlib
GCC = gcc
RM = rm -f
WWW = -Wall -Wextra -Werror

%.o: %.c
	${GCC} ${WWW} -c $< -o $@ -I ${INCLUDES}

${NAME}: ${OBJECTS}
	${LIBCREATE} ${NAME} ${OBJECTS}
	${RANLIB} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all
