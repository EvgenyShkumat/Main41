#include <iostream>
#include <string>
#define N 3
using namespace std;

string convert_to_string(int matrix[N][N]) {
	string msg = "";
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			msg += to_string(matrix[i][j]) + " ";
		}
		msg += "\n";
	}

	return msg;
}