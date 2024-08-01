CC = cc
CFLAGS += -Wall -Wextra -Werror $(FT_LIBRARY_FLAGS) $(RB_TREE_LIBRARY_FLAGS)

SRC = main.c utils.c file_reader.c dictionary/dictionary.c dictionary/dictionary_utils.c num_words_dict.c parsing_rules.c number_printing.c num_printing_utils.c num_printing_utils2.c
OBJ = $(SRC:.c=.o)
HEADER = utils.h file_reader.h dictionary/dictionary.h dictionary/dictionary_utils.h num_words_dict.h parsing_rules.h number_printing.h num_printing_utils.h
NAME = rush-02

FT_LIBRARY_INCLUDE_DIR = $(FT_LIBRARY_DIR)/includes
FT_LIBRARY_DIR = libft
FT_LIBRARY = libft/libft.a
FT_LIBRARY_FLAGS = -I $(FT_LIBRARY_INCLUDE_DIR)

RB_TREE_LIBRARY_INCLUDE_DIR = $(RB_TREE_LIBRARY_DIR)/includes
RB_TREE_LIBRARY_DIR = lib_red_black_tree
RB_TREE_LIBRARY = lib_red_black_tree/lib_red_black_tree.a
RB_TREE_LIBRARY_FLAGS = -I $(RB_TREE_LIBRARY_INCLUDE_DIR)

all: $(NAME)

clean:
	rm -f $(OBJ)
	make -C $(FT_LIBRARY_DIR) clean
	make -C $(RB_TREE_LIBRARY_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(FT_LIBRARY_DIR) fclean
	make -C $(RB_TREE_LIBRARY_DIR) fclean

$(NAME): $(OBJ) $(FT_LIBRARY) $(RB_TREE_LIBRARY)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(FT_LIBRARY):
	make -C $(FT_LIBRARY_DIR)

$(RB_TREE_LIBRARY):
	make -C $(RB_TREE_LIBRARY_DIR)

.PHONY: all clean fclean $(FT_LIBRARY) $(RB_TREE_LIBRARY)
