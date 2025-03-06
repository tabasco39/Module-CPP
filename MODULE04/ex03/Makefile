NAME = abstract

SRC = main.cpp\
	  AMateria.cpp\
	  Character.cpp\
	  Cure.cpp\
	  Ice.cpp\
	  MateriaSource.cpp



OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS =  -Wall -Wextra -Werror -std=c++98 -g

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