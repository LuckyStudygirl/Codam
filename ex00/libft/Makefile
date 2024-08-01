CC = cc
CFLAGS += -Wall -Wextra -Werror -I $(INCLUDES)

SRCS = srcs
SRC = 	$(SRCS)/ft_putchar.c \
		$(SRCS)/ft_swap.c \
		$(SRCS)/ft_putstr.c \
		$(SRCS)/ft_strlen.c \
		$(SRCS)/ft_strcmp.c \
		$(SRCS)/ft_strdup.c \
		$(SRCS)/ft_strcpy.c \
		$(SRCS)/ft_strcat.c
OBJ = $(SRC:.c=.o)
INCLUDES = includes
HEADER = $(INCLUDES)/ft.h
NAME = libft.a

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJ)
	ar crs $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re
