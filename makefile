CC=C:\MinGW\bin\gcc.exe

hellomake: main.o
	$(CC) -o hellomake main.o
	