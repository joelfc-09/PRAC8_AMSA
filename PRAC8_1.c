#include <unistd.h>

int main() {
	sleep(30);
	int contador = 0;
	for (int i = 0; i < 1000000000; i++) {
		contador = contador + i;
	}
}
