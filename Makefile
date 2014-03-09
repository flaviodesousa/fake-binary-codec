CFLAGS=-std=c99

all: encoder decoder

encoder: encoder.c

decoder: decoder.c

test: encoder decoder
	[ "`echo 'testing.' | ./encoder | ./decoder`" = "testing." ] && echo "Pass" || echo "Fail"

clean:
	rm encoder decoder
