#define N 3

bool is_matrix_symmetric(int matrix[N][N]) {
	bool symmetric = true;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i != j && matrix[i][j] != matrix[j][i]) {
				return false;
			}
		}
	}

	return symmetric;
}