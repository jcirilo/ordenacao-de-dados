SRCDIR = ./src
OBJDIR = ./obj
BINDIR = ./bin
APPDIR = ./app
INCLUDEDIR = ./include
APPNAME = app

all: clean buildlib buildapp run

buildlib: \
	swap.o \
	printv.o \
	bubble_sort.o \
	intercalate.o \

buildapp:
	gcc $(APPDIR)/main.c $(OBJDIR)/*.o -iquote $(INCLUDEDIR) -o $(BINDIR)/$(APPNAME)
	
run:
	$(BINDIR)/$(APPNAME)

clean:
	rm -f $(BINDIR)/* $(OBJDIR)/*

%.o: $(SRCDIR)/%.c $(INCLUDEDIR)/%.h
	gcc -c $< -iquote $(INCLUDEDIR)/ -o $(OBJDIR)/$@