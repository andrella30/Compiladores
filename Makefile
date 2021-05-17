OBJECTS = lex.yy.o tiger.tab.o errormsg.o util.o absyn.o prabsyn.o symbol.o \
	table.o parse.o env.o semant.o types.o translate.o tree.o printtree.o \
	frame.o temp.o assem.o canon.o findEscape.o codegen.o

INCLUDE = ./include

all: lextest parsetest absyntest typechecktest translatetest tc
.PHONY: all

lextest: lextest.o $(OBJECTS)
	cc -g -o $@ lextest.o $(OBJECTS)

parsetest: parsetest.o $(OBJECTS)
	cc -g -o $@ parsetest.o $(OBJECTS)

absyntest: absyntest.o $(OBJECTS)
	cc -g -o $@ absyntest.o $(OBJECTS)

typechecktest: typechecktest.o $(OBJECTS)
	cc -g -o $@ typechecktest.o $(OBJECTS)

translatetest: translatetest.o $(OBJECTS)
	cc -o $@ translatetest.o $(OBJECTS)

tc: main.o $(OBJECTS)
	cc -o $@ main.o $(OBJECTS)

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

# typecheck
typechecktest.o: typechecktest.c errormsg.h util.h absyn.h symbol.h
env.o: env.c env.h
semant.o: semant.c semant.h
types.o: types.c types.h

# frame
frame.o: frame.h
temp.o: temp.h
findEscape.o: findEscape.h

# translate
translate.o: translate.h
tree.o: tree.h
printtree.o: printtree.h
translatetest.o: translatetest.c errormsg.h util.h absyn.h symbol.h frame.h

# canon
canon.o: canon.h

# ir
assem.o: assem.h
codegen.o: codegen.h

.PHONY: clean
clean:
	rm -f *.o tc lextest parsetest absyntest typechecktest translatetest lex.yy.c y.output tiger.tab.c tiger.tab.h