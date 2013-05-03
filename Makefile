#--------------------------------------------------------
# Fichier: Makefile 	Auteur(s): Simon DÉSAULNIERS
#
#--------------------------------------------------------
# Make file du code source du travail pratique #3
# du cours pro1027 de l'UQTR.
#--------------------------------------------------------

SRCDIR=./src
BINDIR=./bin

FLAGS="-I."

pro1027-tp3: main.o
	gcc -o pro1027-tp3 main.o
main.o:
	gcc -c $(SRCDIR)/
