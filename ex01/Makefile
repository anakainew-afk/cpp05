NAME = 01
CC = c++
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3 -std=c++98

SRCS = srcs/main.cpp \
	srcs/Bureaucrat.cpp \
	srcs/Form.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp includes/Form.hpp includes/Bureaucrat.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re