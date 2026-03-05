CC = gcc
TARGET = hello getValue
TEST = test
FLAGS = -Wall -g -o
CLEAN_FILES = $(TARGET) $(TEST) student_score.txt

.PHONY : all $(TARGET) $(TEST) clean
all: $(TARGET)

noresault:
	@echo "Don't use this methods."
	@echo "Type methods plz"

test: test.c
	@$(CC) $(FLAGS) $@ $@.c && ./$@
	@echo "$@ make complete."

# Replace the two functions above.
# When running 'make all', it iterates through $(TARGET).
# For each target (e.g., hello: hello.c):
# '$@' expands to the target name (hello)
# '$<' expands to the first prerequisite (hello.c)
$(TARGET): %: %.c
	@$(CC) $(FLAGS) $@ $<
	@./$@
	@printf "\n$@ make complete.\n"

clean:
	@rm -f $(CLEAN_FILES)
	@echo "Clean up done."

# hello: hello.c
# 	@$(CC) $(FLAGS) $@ $< && ./$@
# 	@printf "\n$@ make complete."

# getValue: getValue.c
# 	@$(CC) $(FLAGS) $@ $< && ./$@
# 	@printf "\n$@ make complete."