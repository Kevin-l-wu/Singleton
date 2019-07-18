Singleton : Main.o
	g++ Main.cpp -o Singleton
.PHONY: clean
clean:
	rm -rf *.o Singleton