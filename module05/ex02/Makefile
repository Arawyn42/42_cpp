NAME	=	bureaucrat

CPP		=	c++

FLAGS	=	-Wall -Wextra -Werror -g -std=c++98

SRCS	=	main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp

OBJS	=	$(SRCS:.cpp=.o)

RM		=	rm -f

%.o:		%.cpp
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	$(CPP) $(FLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) *_shrubbery *_robotomized *_pardoned

fclean:		clean
	$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re