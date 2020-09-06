#include <iostream>

using namespace std;

void mem_test1(int length) {
	char x = 'A';
	char * message = new char[length];
	for(int i = 0; i < length; i++) {
		x += i;
		message[i] = x;
	}
	message[length] = '\0';
	cout << "Calculated message is: " << message << endl;
}

void mem_test2(int reset_interval, int iterations) {
	int * counter = new int;
	
	for(int i = 0; i < iterations; i++) {
		*counter += i;
		if ((i % reset_interval) == 0) {
			cout << "Our int is: " << *counter << endl;
			counter = new int(i);
		}
	}
	cout << "Final int is: " << *counter << endl;
	delete counter;
	*counter = 0;
}

int main() {
	
	mem_test1(6);
	mem_test2(10, 100);
	return 0;
}