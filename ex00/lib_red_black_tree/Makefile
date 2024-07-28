CC = cc
CFLAGS += -Wall -Wextra -Werror -I $(INCLUDES)

SRCS = srcs
SRC = 	$(SRCS)/red_black_tree.c \
		$(SRCS)/red_black_tree_utils.c \
		$(SRCS)/red_black_tree_insert_utils.c
OBJ = $(SRC:.c=.o)
INCLUDES = includes
HEADER =	$(INCLUDES)/red_black_tree.h \
			$(INCLUDES)/red_black_tree_utils.h \
			$(INCLUDES)/red_black_tree_insert_utils.h
NAME = lib_red_black_tree.a

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
