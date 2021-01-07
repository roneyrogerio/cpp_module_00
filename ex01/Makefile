NAME   = CrappyBook
SRC    = CrappyBook.cpp PhoneBook.cpp
CC     = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

re: fclean all

clean: fclean

fclean:
	rm -f $(NAME)
