output: main.o paper.o rock.o RPSGame.o scissors.o tool.o menuMaker.o inputCheck.o
	g++ main.o paper.o rock.o RPSGame.o scissors.o tool.o menuMaker.o inputCheck.o -std=c++11 -o output

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

paper.o: paper.cpp paper.hpp
	g++ -std=c++11 -c paper.cpp

rock.o: rock.cpp rock.hpp
	g++ -std=c++11 -c rock.cpp

RPSGame.o: RPSGame.cpp RPSGame.hpp
	g++ -std=c++11 -c RPSGame.cpp

scissors.o: scissors.cpp scissors.hpp
	g++ -std=c++11 -c scissors.cpp

tool.o: tool.cpp tool.hpp
	g++ -std=c++11 -c tool.cpp

menuMaker.o: menuMaker.cpp menuMaker.hpp
	g++ -std=c++11 -c menuMaker.cpp

inputCheck.o: inputCheck.cpp inputCheck.hpp
	g++ -std=c++11 -c inputCheck.cpp

clean:
	rm *.o output