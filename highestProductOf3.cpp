#include <vector>

using namespace std;

int highestProductOf3(const vector<int>& vectorOfInts) {

	if (vectorOfInts.size() < 3) {
		throw invalid_argument("Error: Ya need three numbers to get "
				"a product of 3, mate");
	}

	int highest = max(vectorOfInts[0], vectorOfInts[1]);
	int lowest  = min(vectorOfInts[0], vectorOfInts[1]);

	int highestProductOf2 = vectorOfInts[0] * vectorOfInts[1];
	int lowestProductOf2  = vectorOfInts[0] * vectorOfInts[1];

	int highestProductOf3 = vectorOfInts[0] * vectorOfInts[1] * vectorOfInts[2];

	for (size_t i = 2; i < vectorOfInts.size(); ++i) {
		int current = vectorOfInts[i];

		highestProductOf3 = max(
			highestProductOf3,
			max(
				current * highestProductOf2,
				current * lowestProductOf2
			)
		);

		lowestProductOf2 = min(
			lowestProductOf2,
			min(
				current * highest,
				current * lowest
			)
		);

		highestProductOf2 = max(
			highestProductOf2,
			max(
				current * highest,
				current * lowest
			)
		);

		lowest = min(lowest, current);
		highest = max(highest, current);
	}

	return highestProductOf3;
}
