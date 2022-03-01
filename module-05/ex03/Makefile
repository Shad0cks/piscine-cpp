SOURCES_FILES	=	src/main.cpp 									\
					src/Bureaucrat.class.cpp 						\
					src/Form.class.cpp 								\
					src/ShrubberyCreationForm.class.cpp 			\
					src/RobotomyRequestForm.class.cpp 				\
					src/PresidentialPardonForm.class.cpp 			\
					src/Intern.class.cpp 							\


HEADER			=	headers/Bureaucrat.class.hpp

SOURCES			=	$(addprefix ./, $(SOURCES_FILES))

OBJECTS			= 	$(SOURCES:.cpp=.o)

NAME			=	a.out

CC				=	g++
RM				=	rm -f

CFLAGS			=	-Wall -Wextra -Werror -std=c++98

.c.o:
				$(CC) $(CFLAGS) -cpp $< -o $(<:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJECTS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
				$(RM) $(OBJECTS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re