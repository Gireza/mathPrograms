CC=gcc
CFLAGS=-W -Wall
#MFLAG=-lm
EXEC=main
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)


all: $(EXEC)

main: $(OBJ)
	@$(CC) -o $@ $^

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf *.o resultat.txt

mrproper: clean
	@rm -rf $(EXEC)