IDIR=../include
#CXXFLAGS:=$(CXXFLAGS) $(sdl2-config --cflags) -I$(IDIR) -g -Wall -Werror
# Couldn't get sdl2-config --cflags to show up properly
SDL=/usr/local/include/SDL2
CXXFLAGS += -I$(SDL) -I$(IDIR) -g -Wall -Werror

ODIR=obj
LDIR=../lib
#LDLIBS += $(pkg-config --libs sdl2)
LDLIBS += -lSDL2

_DEPS = CApp.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = CApp.o CApp_OnInit.o CApp_OnEvent.o CApp_OnLoop.o CApp_OnRender.o CApp_OnCleanup.o
#_OBJ = CApp_OnInit.o CApp_OnEvent.o CApp_OnLoop.o CApp_OnRender.o CApp_OnCleanup.o
OBJ = $(patsubst %, $(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp 
#	$(CC) -c -o $@ $< $(CFLAGS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<

# $^ = right of colon
# $@ = left of colon

CApp: $(OBJ)
#	$(CXX) -o $@ $^ $(CXXFLAGS) $(LIBS)
	$(CXX) $(LDFLAGS) $(LOADLIBES) -o $@ $^ $(LDLIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~

# http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
