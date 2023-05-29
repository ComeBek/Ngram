CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
SOURCSE = my_ngram.c
TARGET = my_ngram

$(TARGET):$(SOURCSE)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean

clean:
	@rm -r $(TARGET)

fclean: clean
	rm -f $(TARGET)