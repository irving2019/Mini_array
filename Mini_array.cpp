#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));

	const int COOL = 10;
	const int ROOL = 10;

	int arr[COOL][ROOL];

	for (int i = 0; i < COOL; i++)
	{
		for (int j = 0; j < ROOL; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < COOL; i++)
	{
		for (int j = 0; j < ROOL; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}