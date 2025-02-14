NAME = zombie

SRC = Zombie.cpp \
	  zombieHorde.cpp\
	  main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS =  -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp
	${CC} ${CFLAGS} -o $@ -c $<

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re