#include <cstdlib>
#include <iostream>
#include <string>
#include <time.h>
#include "maxprofit.h"

using namespace std;

vector<int> generate_values() {
    srand (time(NULL));
	vector<int> values;
	for (int i=0; i < 10; ++i) {
        int num = rand() % 100 + 1;
		values.push_back(num);
	}

	return values;
}

int main(int argc, const char * argv[]) {
    
    vector<int> values = generate_values();
    string method = string(argv[1]);
    if (method == "maxprofit") {
        string str = "";
        for (size_t i = 0; i < values.size(); ++i) {
            cout << values[i] << " ";
            }
            cout << "\n";
    
            cout << maxProfit(values) << "\n";
     }
    else {
        for (int i = 1; i < argc; ++i) {
            cout << argv[i] << " ";
            }
    cout << "\n";
    }

    return 0;
}

