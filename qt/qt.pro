######################################################################
# Automatically generated by qmake (2.01a) Tue Jul 31 19:38:56 2012
######################################################################

TEMPLATE = app
TARGET = 
DEPENDPATH += .
INCLUDEPATH += .
QMAKE_CXXFLAGS += -g -std=c++0x
# Input
HEADERS += Board.hpp \
           BoardPositions.hpp \
           CheckersGameWidget.hpp \
           Computer.hpp \
           Figures.hpp \
           History.hpp \
           Move.hpp \
           Players.hpp \
           PossibleMoves.hpp \
           QtBoard.hpp \
           StaticEvaluator.hpp \
           types.hpp \
	   ai/NeuralNetwork.hpp \
	  ai/Neuron.hpp\
	ai/BoardSquareIterator.hpp 
SOURCES += Board.cpp \
           BoardPositions.cpp \
           CheckersGameWidget.cpp \
           Computer.cpp \
           main.cpp \
           Move.cpp \
           PossibleMoves.cpp \
           StaticEvaluator.cpp \
           types.cpp\
	ai/NeuralNetwork.cpp        
