#############################################################################
# Makefile for building: qt
# Generated by qmake (2.01a) (Qt 4.7.2) on: Wed Aug 8 11:47:09 2012
# Project:  qt.pro
# Template: app
# Command: /usr/bin/qmake -o Makefile qt.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -std=c++0x -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = Board.cpp \
		BoardPositions.cpp \
		CheckersGameWidget.cpp \
		Computer.cpp \
		main.cpp \
		Move.cpp \
		StaticEvaluator.cpp \
		types.cpp \
		ai/NeuralNetwork.cpp moc_CheckersGameWidget.cpp \
		moc_QtBoard.cpp
OBJECTS       = Board.o \
		BoardPositions.o \
		CheckersGameWidget.o \
		Computer.o \
		main.o \
		Move.o \
		StaticEvaluator.o \
		types.o \
		NeuralNetwork.o \
		moc_CheckersGameWidget.o \
		moc_QtBoard.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		qt.pro
QMAKE_TARGET  = qt
DESTDIR       = 
TARGET        = qt

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: qt.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -o Makefile qt.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile qt.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/qt1.0.0 || $(MKDIR) .tmp/qt1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/qt1.0.0/ && $(COPY_FILE) --parents Board.hpp BoardPositions.hpp CheckersGameWidget.hpp Computer.hpp Figures.hpp History.hpp Move.hpp Players.hpp PossibleMoves.hpp QtBoard.hpp StaticEvaluator.hpp types.hpp ai/NeuralNetwork.hpp ai/Neuron.hpp ai/BoardSquareIterator.hpp .tmp/qt1.0.0/ && $(COPY_FILE) --parents Board.cpp BoardPositions.cpp CheckersGameWidget.cpp Computer.cpp main.cpp Move.cpp StaticEvaluator.cpp types.cpp ai/NeuralNetwork.cpp .tmp/qt1.0.0/ && (cd `dirname .tmp/qt1.0.0` && $(TAR) qt1.0.0.tar qt1.0.0 && $(COMPRESS) qt1.0.0.tar) && $(MOVE) `dirname .tmp/qt1.0.0`/qt1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/qt1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_CheckersGameWidget.cpp moc_QtBoard.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_CheckersGameWidget.cpp moc_QtBoard.cpp
moc_CheckersGameWidget.cpp: Players.hpp \
		Computer.hpp \
		StaticEvaluator.hpp \
		types.hpp \
		Board.hpp \
		Move.hpp \
		Figures.hpp \
		BoardPositions.hpp \
		History.hpp \
		ai/NeuralNetwork.hpp \
		ai/Neuron.hpp \
		QtBoard.hpp \
		CheckersGameWidget.hpp
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) CheckersGameWidget.hpp -o moc_CheckersGameWidget.cpp

moc_QtBoard.cpp: Figures.hpp \
		Players.hpp \
		QtBoard.hpp
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) QtBoard.hpp -o moc_QtBoard.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

Board.o: Board.cpp Board.hpp \
		Move.hpp \
		Figures.hpp \
		Players.hpp \
		BoardPositions.hpp \
		History.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Board.o Board.cpp

BoardPositions.o: BoardPositions.cpp BoardPositions.hpp \
		Players.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BoardPositions.o BoardPositions.cpp

CheckersGameWidget.o: CheckersGameWidget.cpp CheckersGameWidget.hpp \
		Players.hpp \
		Computer.hpp \
		StaticEvaluator.hpp \
		types.hpp \
		Board.hpp \
		Move.hpp \
		Figures.hpp \
		BoardPositions.hpp \
		History.hpp \
		ai/NeuralNetwork.hpp \
		ai/Neuron.hpp \
		QtBoard.hpp \
		PossibleMoves.cpp \
		PossibleMoves.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o CheckersGameWidget.o CheckersGameWidget.cpp

Computer.o: Computer.cpp Computer.hpp \
		StaticEvaluator.hpp \
		types.hpp \
		Board.hpp \
		Move.hpp \
		Figures.hpp \
		Players.hpp \
		BoardPositions.hpp \
		History.hpp \
		ai/NeuralNetwork.hpp \
		ai/Neuron.hpp \
		PossibleMoves.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Computer.o Computer.cpp

main.o: main.cpp CheckersGameWidget.hpp \
		Players.hpp \
		Computer.hpp \
		StaticEvaluator.hpp \
		types.hpp \
		Board.hpp \
		Move.hpp \
		Figures.hpp \
		BoardPositions.hpp \
		History.hpp \
		ai/NeuralNetwork.hpp \
		ai/Neuron.hpp \
		QtBoard.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

Move.o: Move.cpp Move.hpp \
		Figures.hpp \
		Players.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Move.o Move.cpp

StaticEvaluator.o: StaticEvaluator.cpp StaticEvaluator.hpp \
		types.hpp \
		Board.hpp \
		Move.hpp \
		Figures.hpp \
		Players.hpp \
		BoardPositions.hpp \
		History.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o StaticEvaluator.o StaticEvaluator.cpp

types.o: types.cpp types.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o types.o types.cpp

NeuralNetwork.o: ai/NeuralNetwork.cpp ai/NeuralNetwork.hpp \
		Board.hpp \
		Move.hpp \
		Figures.hpp \
		Players.hpp \
		BoardPositions.hpp \
		History.hpp \
		ai/Neuron.hpp \
		ai/BoardSquareIterator.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o NeuralNetwork.o ai/NeuralNetwork.cpp

moc_CheckersGameWidget.o: moc_CheckersGameWidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_CheckersGameWidget.o moc_CheckersGameWidget.cpp

moc_QtBoard.o: moc_QtBoard.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_QtBoard.o moc_QtBoard.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

