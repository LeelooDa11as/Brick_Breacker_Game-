NAME = brickBreacker
SRC = main.cpp src/Ball.cpp src/Game.cpp src/Paddle.cpp src/Screen.cpp
F_OBJ = obj/
OBJ = $(addprefix $(F_OBJ), $(SRC:.cpp=.o))
DEP = $(addprefix $(F_OBJ), $(SRC:.cpp=.d))
CC = c++

# FLAGS
SFML_PATH 	= /opt/homebrew
SFML_INC	= -I $(SFML_PATH)/include
SFML_LIB	= -L $(SFML_PATH)/lib -lsfml-graphics -lsfml-window -lsfml-system
ERROR_FLAGS = -std=c++17 -Wall -Wextra -Werror -MMD -g -fsanitize=address

# color codes
BLACK    =   \033[0;39m
BLUE     =   \033[34m
GREEN    =   \033[32m
RED      =   \033[31m

all: dir $(NAME)

-include ${DEP}

dir:
	@mkdir -p $(F_OBJ)

#compile object files
$(F_OBJ)%.o: %.cpp Makefile
	@mkdir -p $(dir $@)
	@echo "Compiling $< "
	@$(CC) $(ERROR_FLAGS) -I ./inc $(SFML_INC) -c $< -o $@

$(NAME):: $(OBJ)
	@$(CC) $(ERROR_FLAGS) $(OBJ) $(SFML_LIB) -o $(NAME)
	@echo "$(GREEN)Everything has been compilated.$(BLACK)"

$(NAME)::
	@echo "$(GREEN)No actions needed.$(BLACK)"

clean:
	$(RM) $(OBJ) $(DEP)
	$(RM) -R obj

fclean: clean
	$(RM) $(NAME)
	@echo "$(RED)Everything has been cleaned.$(BLACK)"

re: clean fclean all

.PHONY: all clean fclean re
