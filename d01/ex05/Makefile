CC = c++
FLAGS = -Wall -Wextra -Werror -g -std=c++98
SRCS = main.cpp \
		Harl.cpp
HEADERS = Harl.hpp
OBJS = $(SRCS:%.cpp=%.o)
NAME = harl

all: $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $^ -o $(NAME)
clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
