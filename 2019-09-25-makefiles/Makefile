CXXFLAGS=-O2 -wall


all: sumas.x datos.txt fig.pdf #verificar existencia 

sumas.x : sumas.cpp
	g++ $(CXXFLAGS) $< -o $@

datos.txt : sumas.x 
	./$< > $@

fig.pdf : plot.gp datos.txt
	gnuplot $<

.PHONY: clean
clean:
	rm -f sumas.x datos.txt fig.pdf
