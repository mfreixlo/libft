NAME = libft.a

HEADER = libft.h

SRC = main_2.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcat.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS = ft_lstnew.c

RM = rm -f

OBJS = ${SRC:.c=.o}
BONUS_O = ${BONUS:.c=.o}

FLAGS = -Wall -Wextra -Werror

$(NAME) : ${OBJS}
	ar -rc $(NAME) $(OBJS)

all : $(NAME)

%.o: %.c $(HEADER)
	gcc -c -o libft  $< $(FLAGS) -lsbd 

bonus : $(NAME) $(BONUS_O) $(OBJS)
	ar -rc $(NAME) $(BONUS_O)

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

rebonus : fclean bonus

.PHONY: all clean fclean re bonus rebonus                      