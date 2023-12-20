NAME = bsp

CXX = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98 #-fsanitize=address

RM = rm -rf

SRCS = 	main.cpp\
		Fixed.cpp\
		Point.cpp\
		bsp.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(OBJS)

re : fclean all clean