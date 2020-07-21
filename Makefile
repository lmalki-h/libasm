NAME = libasm.a

OBJS = ft_strlen.o

NASM = nasm
NASM_FLAGS = -f macho64
FLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
	$(NASM) $(NASM_FLAGS) ft_strlen.s
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all


.PHONY: all clean fclean re 

