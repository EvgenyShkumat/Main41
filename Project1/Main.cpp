#include <iostream>
#define N 3
using namespace std;

string convert_to_string(int matrix[N][N]);

bool is_matrix_symmetric(int matrix[N][N]);
bool is_matrix_antisymmetric(int matrix[N][N]);

int main() {
	int matrix[N][N] = { {1, -9, -8}, {9, -4, -5}, {8, 5, 6} };

	string msg = is_matrix_antisymmetric(matrix) ? "Yes this matrix is antisymmetric" 
		: "No, this matrix isn't antisymmetric";

	cout << "Matrix:\n" << convert_to_string(matrix);
	cout << msg;

	return 0;
}