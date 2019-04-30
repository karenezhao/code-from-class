# CPP is a variable
CPP=g++
# $(CPP) gets its value

# all-in-one:
# sizes: sizes.cpp
# 	g++ sizes.cpp -o sizes

# alternatively
# links sizes.o with all the libraries used
# $@ is shorthand for the rule name (so, "sizes" here)
# $^ is everything on the right-hand side of the :
sizes: sizes.o
	$(CPP) $^ -o $@

# makes object code for sizes.cpp
sizes.o: sizes.cpp
	g++ -c sizes.cpp

# gets rid of all compiled code
clean:
	rm *.o sizes arrays_1 arrays_2 binarySearch call_by_ref_and_value out-of-bounds

arrays_1: arrays_1.cpp
	g++ -std=c++11 arrays_1.cpp -o arrays_1

out-of-bounds: out-of-bounds.cpp
	g++ out-of-bounds.cpp -o out-of-bounds
