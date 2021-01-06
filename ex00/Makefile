NAME   = megaphone
SRC    = megaphone.cpp
CC     = clang++
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

re: fclean all

clean: fclean

fclean:
	rm -f $(NAME)
