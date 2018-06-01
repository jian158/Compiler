parser:sytax.y word.l Main.h LinkedHashMap.h
	bison -d -v sytax.y
	flex word.l
	g++ -std=c++11 Main.cpp sytax.tab.c -lfl -ly -o parser 
clean:
	rm parser sytax.tab.c sytax.tab.h lex.yy.c
	