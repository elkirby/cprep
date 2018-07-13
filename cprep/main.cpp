#include <iostream>
#include <string>


int main(int argc, const char * argv[]) {
    
    std::cout <<  std::to_string(argc)+ "\n";
    std::string string = "";
    for (int i = 1; i < argc; ++i) {
        string.append(argv[i]);
        string.append(" ");

    }
    std::cout << string << "\n";
    return 0;
}
