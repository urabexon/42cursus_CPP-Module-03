# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 18:36:42 by hurabe            #+#    #+#              #
#    Updated: 2025/01/12 18:39:28 by hurabe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ScavTrap
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic-errors
RM			=	rm -rf

INCS		=	-I includes/
SRCS_DIR	=	srcs/
OBJS_DIR	=	objs/
SRCS_FILES	=	main.cpp ClapTrap.cpp ScavTrap.cpp
SRCS		=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))
OBJS		=	$(patsubst $(SRCS_DIR)%.cpp, $(OBJS_DIR)%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCS) $(OBJS) -o $@

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)

fclean:
	$(RM) $(OBJS_DIR) $(NAME)

re: fclean all

.PHONY: all clean fclean re
