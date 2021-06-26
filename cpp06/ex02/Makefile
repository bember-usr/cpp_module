NAME = base

CPP				= clang++
CPPFLAGS		= -Wall -Wextra -Werror -I.

SRCS = A.cpp\
	   B.cpp\
	   C.cpp\
	   Base.cpp\
		main.cpp

OBJS = A.o \
	   B.o\
	   C.o\
	   Base.o\
		main.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAG) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAG) $(SRCS) -c

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean re

re: fclean all
