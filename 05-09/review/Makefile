review: review.o pointFuncs.o pointArrayFuncs.o
	# g++ $^ -o $@
	g++ review.o pointFuncs.o pointArrayFuncs.o -o review

review.o: review.cpp
	g++ -c review.cpp

pointFuncs.o: pointFuncs.cpp
	g++ -c pointFuncs.cpp

pointArrayFuncs.o: pointArrayFuncs.cpp
	g++ -c pointArrayFuncs.cpp

clean:
	rm *.o review