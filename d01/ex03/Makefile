CC = c++
FLAGS = -Wall -Wextra -Werror -g -std=c++98
SRCS = main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp
OBJS = $(SRCS:%.cpp=%.o)
HEADERS = HumanA.hpp \
		HumanB.hpp \
		Weapon.hpp
NAME = violence

all: $(NAME)

%.o: %.cpp $(HEADERS)
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $^ -o $(NAME)
clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
