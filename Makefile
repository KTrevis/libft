NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isalnum.c ft_isprint.c ft_strlen.c ft_memset.c ft_memcpy.c\
			 ft_memmove.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c ft_memcmp.c ft_strdup.c ft_substr.c ft_strjoin.c ft_split.c\
			 ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_strlcpy.c ft_strlcat.c ft_strcmp.c\
			 ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\

PRINTF_SRCS = ft_printf.c ft_putaddr_len.c ft_putchar_len.c ft_putnbr_len.c ft_putstr_len.c ft_strlen.c ft_uppercase.c
PRINTF_OBJS = $(addprefix ft_printf/,$(PRINTF_SRCS:.c=.o))

OBJS =          $(SRCS:.c=.o)
OBJS_BONUS =    $(SRCS_BONUS:.c=.o)
NAME =          libft.a

PRINTF = ft_printf/libftprintf.a
CFLAGS =        -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(PRINTF)
	ar rc $(NAME) $(OBJS) $(PRINTF_OBJS)

$(PRINTF):
	make -C ft_printf


.c.o:
	cc $(CFLAGS) -c $^

clean:
	make -C ft_printf/ clean
	rm -rf $(OBJS)

fclean:         clean
	make -C ft_printf/ fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
