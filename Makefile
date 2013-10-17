CC = pdflatex
SOURCE = cheatsheet.tex
TARGET = cheatsheet.pdf

all: make

make: 
	$(CC) $(SOURCE) 
	okular $(TARGET)
