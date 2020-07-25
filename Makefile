NAME = libasm.a
NAME_TEST = libasm_test

CC = gcc
AS = nasm
ASFLAGS = -f elf64
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.s \
       ft_write.s \
       ft_read.s \
       ft_strcmp.s \
       ft_strcpy.s \
       ft_strdup.s \

OBJS = $(SRCS:.s=.o)

all: $(NAME) $(NAME_TEST)

$(NAME): $(OBJS) Makefile
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(NAME_TEST): $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o $(NAME_TEST)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(NAME_TEST)
	rm -rf main.o

re:	fclean all

test: all
	./run_test


.PHONY: all clean fclean re test

