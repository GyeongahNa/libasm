NAME        =	libasm.a
ASM_SRCS    =   ./ft_strlen.s \
                ./ft_strcpy.s \
                ./ft_strcmp.s \
                ./ft_strdup.s \
                ./ft_read.s \
                ./ft_write.s

ASM_OBJS    =        $(ASM_SRCS:.s=.o)

TEST_SRCS    =     ./main.c
TEST_OBJS    =     ./main.o
all:                $(NAME)

%.o:                %.s
					nasm -f macho64 $<

$(NAME):            $(ASM_OBJS)
					ar rc $(NAME) $(ASM_OBJS)

test:                $(NAME)
					gcc -Wall -Wextra -Werror -o test main.c -L./ -lasm

clean:
					rm -rf $(ASM_OBJS) $(TEST_OBJS)

fclean:                clean
					rm -rf $(NAME) ./test

re:                    fclean all

