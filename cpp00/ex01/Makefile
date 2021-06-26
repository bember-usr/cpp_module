.PHONY: all clean fclean re

NAME = phonebook

SRCS = Contact.cpp Phonebook.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) Contact.hpp Phonebook.hpp
	@clang++ $(FLAGS) $(SRCS) -o $(NAME) 

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all