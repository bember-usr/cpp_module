NAME = megaphone

SRC = megaphone.cpp

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.cpp=.o)

all: $(OBJ)
	@clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re