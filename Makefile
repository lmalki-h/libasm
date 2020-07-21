NAME = libasm.a

OBJS = ft_strlen.o
CC = gcc
NASM = nasm
NASM_FLAGS = -f elf64
FLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
	$(NASM) $(NASM_FLAGS) ft_strlen.s
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	rm -rf run_test

re:	fclean all

test: all
	@$(CC) -c main.c
	@$(CC) main.o $(NAME) -o run_test
	./run_test


.PHONY: all clean fclean re test

