SRCS	=	ft_printf.c ft_printchar.c ft_printhex.c ft_printnbr.c \
				ft_printpnt.c ft_printstr.c ft_printunsg.c

OBJS	= $(SRCS:.c=.o)

NAME	=	libftprintf.a

CFLAGS	+=	-Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	cc $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f ${OBJS} ${OBJS_BONUS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re