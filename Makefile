NAME = libft.a

SRC = ft_atoi.c ft_calloc.c ft_change_char_case.c ft_char_type.c ft_cmp.c ft_find_byte.c ft_itoa.c ft_memcpys.c ft_mem_fill.c ft_memmove.c ft_print.c \
	ft_split.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strnstr.c ft_strtrim.c ft_substr.c

OBJS = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC)
	@ar -rc $(NAME) $(OBJS)
	@echo "Compiled $(NAME) & .o."

clean:
	@rm -f $(OBJS)
	@echo "Deleted .o files."

fclean: clean
	@rm -f $(NAME)
	@echo "Deleted $(NAME)."

re: fclean all
