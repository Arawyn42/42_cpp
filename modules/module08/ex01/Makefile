NAME	=	span

CPP		=	c++

FLAGS	=	-Wall -Wextra -Werror -g -std=c++98

SRCS	=	main.cpp \
			Span.cpp

OBJS	=	$(SRCS:.cpp=.o)

RM		=	rm -f

%.o:		%.cpp
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	$(CPP) $(FLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re