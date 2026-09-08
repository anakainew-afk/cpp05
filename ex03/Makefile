NAME = 03
CC = c++
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRCS = srcs/main.cpp \
	srcs/Bureaucrat.cpp \
	srcs/AForm.cpp \
	srcs/ShrubberyCreationForm.cpp \
	srcs/RobotomyRequestForm.cpp \
	srcs/PresidentialPardonForm.cpp \
	srcs/Intern.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp includes/AForm.hpp includes/Bureaucrat.hpp includes/ShrubberyCreationForm.hpp includes/RobotomyRequestForm.hpp includes/PresidentialPardonForm.hpp includes/Intern.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re