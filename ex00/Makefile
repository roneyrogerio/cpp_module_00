NAME = megaphone
SRC  = megaphone.cpp
CC   = clang++

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

re: fclean all

clean: fclean

fclean:
	rm -f $(NAME)
