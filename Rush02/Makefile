prog : main.o algo.o open_file.o parser.o printer.o prototypes.o 
	gcc -o rush-02 main.o algo.o open_file.o parser.o printer.o prototypes.o

main.o : main.c
	gcc -o main.o -c main.c -Wall -Wextra -Werror

algo.o : algo.c
	gcc -o algo.o -c algo.c -Wall -Wextra -Werror

open_file.o : open_file.c
	gcc -o open_file.o -c open_file.c -Wall -Wextra -Werror

parser.o : parser.c
	gcc -o parser.o -c parser.c -Wall -Wextra -Werror

printer.o : printer.c
	gcc -o printer.o -c printer.c -Wall -Wextra -Werror

prototypes.o : prototypes.c
	gcc -o prototypes.o -c prototypes.c -Wall -Wextra -Werror

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f