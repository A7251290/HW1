#include <iostream>
#include <vector>
using namespace std;

int min(vector<vector<int>> matrix)
{
	int n;
	n = matrix[0][0];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (matrix[i][j] < n)
				n = matrix[i][j];
		}
	}
	return n;
}

int main()
{
	vector<vector<int>> matrix(4, vector<int>(3));
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matrix[i][j];
		}
	}
	cout << "min: " << min(matrix) << endl;
	
	system("pause");
	return 0;
}