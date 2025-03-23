#include <iostream>

using namespace std;

const int N = 8;
int X[N+1]; int cot[N+1]; int d1[2*N+1]; int d2[2*N+1];
int solution = 0;

void NQueen(int i)
{
	for (int j = 1; j <= N; j++)
	{
		if (cot[j] == 0 && d1[i-j+N] == 0 && d2[i+j-1] == 0)
		{
			X[i] = j;
			cot[j] = d1[i - j + N] = d2[i + j - 1] = 1;
			if (i == N)
			{
				solution++;
			}
			else NQueen(i + 1);

			cot[j] = d1[i - j + N] = d2[i + j - 1] = 0;

		}
	}
}

int main()
{
	for (int i = 1; i <= N; i++)
	{
		cot[i] = 0;
	}
	for (int i = 1; i <= 2*N-1; i++)
	{
		d1[i] = d2[i] = 0;
	}
	NQueen(1);
	cout << solution;

	return 0;
}