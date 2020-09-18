NAME = libasm.a
NAME_TEST = libasm_test

CC = clang
AS = nasm
ASFLAGS = -f elf64
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.s \
       ft_write.s \
       ft_read.s \
       ft_strcmp.s \
       ft_strcpy.s \
       ft_strdup.s \

SRCS_TEST = strlen_test.c \
	strcmp_test.c \
	strdup_test.c \
	strcpy_test.c \
	write_test.c \
	read_test.c \

OBJS = $(SRCS:.s=.o)

all: $(NAME) $(NAME_TEST)

$(NAME): $(OBJS) Makefile
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(NAME_TEST): $(NAME) $(SRCS_TEST) libasm.h
	$(CC) $(CFLAGS) main.c $(SRCS_TEST) $(NAME) -o $(NAME_TEST)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(NAME_TEST)

re:	fclean all

test: all
	./$(NAME_TEST)


.PHONY: all clean fclean re test
