a.out:
	gcc main.c

clean:
	rm a.out

test: a.out
	bash test.sh