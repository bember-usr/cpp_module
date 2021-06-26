SRCS			= main.cpp
OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= serializer

%.o: %.cpp
	$(CPP) $(CPPFLAG) $(SRCS) -c

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				/bin/rm -rf $(NAME)

re:				fclean $(NAME)

test:			$(NAME)
				./serializer

.PHONY:			all clean fclean re test