SRC=csq.c
BIN=out-csq
CC=gcc
FLAG=-lm -Wno-unused-result -std=c99 -Os

$(BIN): $(SRC)
	$(CC) $(SRC) $(FLAG) -o $@

clear:
	rm -f $(BIN)
