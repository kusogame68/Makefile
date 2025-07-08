CC = gcc
TARGET = no1 no2
TEST = test
.PHONY = all $(TARGET) $(TEST) clean
FLAGS = -Wall -g -o 

all: noresault

noresault:
	@echo "don't use this methods."
	@echo "type methods plz"

test:
	@$(CC) $(FLAGS) test test.c && ./test
	@echo ""
	@echo "\ntest make complete."

no1: hello.c
	@$(CC) $(FLAGS) no1 hello.c && ./no1
	@printf "\nno1 make complete."

no2: getValue.c
	@$(CC) $(FLAGS) no2 getValue.c && ./no2
	@printf "\nno2 make complete."

clean:
	@rm -f no1 no2
	@echo "Remove done."