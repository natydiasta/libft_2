# Имя итогового архива библиотеки
NAME = libft.a

# Компилятор и флаги
CC = gcc
AR = ar
FLAGS = -Wall -Wextra -Werror

# Файл заголовка теперь в корне проекта
HEADER_FILE = libft.h

# Все исходные файлы теперь в корне проекта (без src)
SRC = ft_atoi.c \
      ft_bzero.c \
      ft_calloc.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_strchr.c \
      ft_strdup.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strncmp.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_tolower.c \
      ft_toupper.c \
      ft_split.c \
      ft_strjoin.c \
      ft_substr.c \
      ft_strtrim.c \
      ft_itoa.c \
      ft_strmapi.c \
      ft_striteri.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c

# Объектные файлы
OBJS = $(SRC:.c=.o)

# Правило по умолчанию
all: $(NAME)

# Сборка библиотеки libft.a
$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $(OBJS)

# Компиляция каждого исходного файла в объектный файл
%.o: %.c $(HEADER_FILE)
	$(CC) $(FLAGS) -c $< -o $@ 

# Очистка объектных файлов
clean:
	rm -f $(OBJS)

# Очистка объектных файлов и библиотеки
fclean: clean
	rm -f $(NAME)

# Полная пересборка
re: fclean all

# Правила для Makefile
.PHONY: all clean fclean re
