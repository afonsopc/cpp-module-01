NAME	= sed
SRC		= main.cpp
OBJ_DIR	= obj
OBJ		= $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -fr $(OBJ_DIR) test.txt test.txt.replace Makefile.replace main.cpp.replace

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: re
	./$(NAME) main.cpp std::string std::pagman
	./$(NAME) Makefile $$ € 
	curl https://socials.omelhorsite.pt > test.txt
	./$(NAME) test.txt fado caldo

.PHONY: all clean fclean re