CC=gcc

fuzz: 
	$(CC) -o $@ -lreadline fuzz.c

clean:
	rm -f fuzz