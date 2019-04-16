# this is a Makefile comment

# when you type make in a directory with a Makefile,
# the first rule in the file gets executed
# if you want to execute another rule in the Makefile,
# you say make rule_name

# rules look like this:
# name_of_thing_to_make: ingredient1 ingredient2 ingredient3 ...
	# you have to tab over to give the steps to make this rule
	# you can have any terminal command in here

testShapes: testShapes.o shapes.o tdd.o
	# The recipe for producing the target (testshapes) is below
	g++ testShapes.o shapes.o tdd.o -o testShapes

# .o rules are actually unecessary—make has default rules
testShapes.o: testShapes.cpp
	g++ -c testShapes.cpp

# clean up all compiled files
clean:
	rm testShapes *.o # removes testShapes and every .o file in the current directory