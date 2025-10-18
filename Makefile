MAKEFLAGS += --no-print-directory

NAME 		= cub3D

CFILES		=	src/main.c						\
												\
				src/parser/init_game.c			\
				src/parser/parse_map.c			\
												\
				src/utils/free_and_errors.c		\
				src/utils/parse_utils.c			\
				src/utils/utils.c				\

LIBFT 		= inc/libft/libft.a

OBJDIR		= obj
OBJFILES 	= $(CFILES:src/%.c=$(OBJDIR)/%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -I inc -I inc/libft/inc

all: $(NAME)

$(NAME): $(LIBFT) $(OBJFILES)
	@$(CC) $(CFLAGS) $(OBJFILES) $(LIBFT) -o $(NAME)

$(LIBFT):
	@make -C inc/libft

$(OBJDIR)/%.o: src/%.c | $(OBJDIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)
	@make clean -C inc/libft

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C inc/libft

re: fclean all

.PHONY: all clean fclean re