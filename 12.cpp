/** Video 39
 * This program checks if a given matrix is symmetric or not.
 */
#include <iostream>

using namespace std;


int main() {
	int matrix[3][3] = {
		8, 1, 3,
		1, 7, 4,
		3, 4, 9
	}, rows = 3, columns = 3;

	if (rows != columns)
		cout << "The matrix is NOT symmetric" << endl;
	else {
		bool symmetric = true;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				if (matrix[i][j] != matrix[j][i]) {
					symmetric = false;
					break;
				}
			}
			if (!symmetric) break;
		}
		if (symmetric) cout << "The matrix is symmetric" << endl;
		else cout << "The matrix is NOT symmetric" << endl;
	}

	return 0;
}
