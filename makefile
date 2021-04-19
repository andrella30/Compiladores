# variable
OBJECTS = lex.yy.o tiger.tab.o errormsg.o util.o absyn.o prabsyn.o symbol.o \
	table.o parse.o

INCLUDE = ./include
# executable
all: lextest parsetest absyntest
.PHONY: all

lextest: lextest.o $(OBJECTS)
	cc -g -o $@ lextest.o $(OBJECTS)

parsetest: parsetest.o $(OBJECTS)
	cc -g -o $@ parsetest.o $(OBJECTS)

absyntest: absyntest.o $(OBJECTS)
	cc -g -o $@ absyntest.o $(OBJECTS)

# objects
errormsg.o: errormsg.c errormsg.h util.h
util.o: util.c util.h
absyn.o: absyn.c absyn.h util.h symbol.h
prabsyn.o: prabsyn.c prabsyn.h util.h absyn.h symbol.h
symbol.o: symbol.c symbol.h util.h table.h
table.o: table.c table.h util.h 
parse.o: parse.c parse.h util.h errormsg.h symbol.h absyn.h

# lex
lextest.o: lextest.c absyn.h symbol.h tiger.tab.h errormsg.h util.h
lex.yy.o: lex.yy.c tiger.tab.h errormsg.h util.h
lex.yy.c: tiger.lex
	flex tiger.lex

# parse
parsetest.o: parsetest.c errormsg.h util.h absyn.h symbol.h
tiger.tab.o: tiger.tab.c
tiger.tab.c: tiger.y
	bison -dv tiger.y
tiger.tab.h: tiger.tab.c
	echo "tiger.tab.h was created at the same time as tiger.tab.c"

# absyn
absyntest.o: absyntest.c errormsg.h util.h absyn.h symbol.h parse.h prabsyn.h

.PHONY: clean
clean:
	rm -f *.o a.out lextest parsetest absyntest typechecktest lex.yy.c y.output tiger.tab.c tiger.tab.h