NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
 ft_isprint.c ft_strlen.c ft_bzero.c ft_strlcpy.c ft_strlcat.c\
  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
   ft_atoi.c ft_strnstr.c ft_memset.c ft_memcpy.c ft_memchr.c\
    ft_memcmp.c ft_strdup.c ft_calloc.c ft_memmove.c ft_substr.c ft_strjoin.c\
	 ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c\
	 ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c\

OFILES = $(CFILES:.c=.o)
SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
	 				ft_lstmap.c 
OFILES_BONUS = $(SRC_BONUS:.c=.o)

LFILE = $(shell (ls -t | head -1))

all: ${NAME}

${NAME}: ${OFILES}
	ar rcs $@ $^


.bonus_files: ${OFILES_BONUS}
	ar rcs ${NAME} $^
	@touch .bonus_files

bonus: ${NAME} .bonus_files

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OFILES} ${OFILES_BONUS} .bonus_files

fclean: clean
	rm -f ${NAME}

re: fclean ${NAME}

.PHONY: all fclean clean re bonus
