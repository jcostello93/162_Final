CXX = g++
CXXFLAGS = -std=c++11
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
LDFLAGS = .lboost_date_time

OBJS = Country.o Austria.o Switzerland.o Germany.o CzechRepublic.o Slovakia.o Hungary.o Player.o  InputValidation.o Main.o Menu.o

SRCS = Country.cpp Austria.cpp Switzerland.cpp Germany.cpp CzechRepublic.cpp Slovakia.cpp Hungary.cpp Player.cpp  InputValidation.cpp Main.cpp Menu.cpp

HEADERS = Country.hpp Austria.hpp Switzerland.hpp Germany.hpp CzechRepublic.hpp Slovakia.hpp Hungary.hpp Player.hpp  InputValidation.hpp Menu.hpp

#target: dependencies
#	rule to build
#

output: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${SRCS} -o output

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm *.o output
