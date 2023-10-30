all:
	gcc a.c -o a.exe
	gcc b.c -o b.exe	

clean:
	rm -Rf *.exe a.out *.out