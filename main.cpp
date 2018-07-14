#include <cstdlib>
#include <iostream>
#include <string>

int * generate_values() {
	static int values[100];
	for (int i=0; i < 100; ++i) {
		values[i] = rand() % 100 + 1;
	}

	return values;
}

int main(int argc, const char * argv[]) {
    
    int *a = generate_values();
    for (int i = 0; i < 100; ++i) {
		std::cout << a[i] << " ";
	}
    std::string string = "";
    for (int i = 1; i < argc; ++i) {
        string.append(argv[i]);
        string.append(" ");

    }
    std::cout << string << "\n";
    return 0;
}
