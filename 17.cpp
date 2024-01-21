/** Video 54
 * This program uses binary search to find the position of a given element in an array.
 */
#include <iostream>

using namespace std;


int main() {
	int numbers[] = { 1, 2, 3, 4, 5 }, target = 4, left, right;

	left = 0;
	right = sizeof(numbers) / sizeof(numbers[0]) - 1;

	while (left <= right) {
		int middle = (left + right) / 2; // left + (left - right) / 2

		if (target == numbers[middle]) {
			cout << "Target found at position " << middle << endl;
			break;
		} else if (target < numbers[middle]) // target > numbers[middle] for descending order
			right = middle - 1;
		else
			left = middle + 1;
	}

	return 0;
}
