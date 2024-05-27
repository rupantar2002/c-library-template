CC = gcc
CFLAGS = -Iinclude/my-library -Wall -Wextra -pedantic
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
TARGET = my_library.a

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

test: all
	$(CC) $(CFLAGS) -o test/tests tests/test_my_library.c $(TARGET)
	./test/tests