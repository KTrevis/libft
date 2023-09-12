NAME = libft.a

SRC = ft_atoi.c ft_calloc.c ft_change_char_case.c ft_char_type.c ft_compare_data.c ft_find_byte.c ft_itoa.c ft_mem_copy.c ft_mem_fill.c ft_memmove.c ft_print.c \
	ft_split.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strnstr.c ft_strtrim.c ft_substr.c

OBJS = $(SRC:.c=.o)

RM = rm -f

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC) -I .
	@ar -rc $(NAME) $(OBJS)
	@echo "$(NAME) & .o compiled."

clean:
	@rm -f $(OBJS)
	@echo "Deleted .o files."

fclean: clean
	@rm -f $(NAME)
	@echo "Deleted $(NAME)."

re: fclean all
