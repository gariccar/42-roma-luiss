NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
AR = ar rcs
RM = rm -f

FILES =  ft_memset ft_atoi ft_bzero  ft_strlcat ft_calloc \
 ft_isalnum  ft_strlen ft_isalpha ft_strncmp ft_isascii ft_strlcpy\
 ft_isdigit ft_strnstr ft_isprint ft_strrchr ft_memchr  ft_tolower\
 ft_memcmp   ft_toupper ft_memcpy ft_memmove ft_strchr ft_strdup\
 ft_strjoin ft_substr ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri\
ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd
FILES_B = ft_lstnew \
		  ft_lstadd_front \
		  ft_lstsize \
		  ft_lstlast \
		  ft_lstiter \
		  ft_lstdelone \
		  ft_lstclear \
		  ft_lstmap \
		  ft_lstadd_back \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

test: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o test


bonus: $(OBJS_B)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
