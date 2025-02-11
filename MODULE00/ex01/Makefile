NAME = phonebook

SRC = Contact.cpp\
	  PhoneBook.cpp\
	  main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -std=c++98

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