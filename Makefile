run:compile
	clear
	./program

compile:clean
	g++ ./src/*.cpp -o program

clean:
	rm -f program
	clear

cleanSrc:
	rm -f myToDoList.txt program
	clear
