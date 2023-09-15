NAME = libft.a

SRC = ft_atoi.c ft_calloc.c ft_tolower.c ft_toupper.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_strncmp.c ft_memcmp.c ft_find_byte.c \
	ft_itoa.c ft_memcpy.c ft_memccpy.c ft_bzero.c ft_memset.c ft_memmove.c ft_print.c \
	ft_split.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_striteri.c \

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