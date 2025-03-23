#include <iostream>
using namespace std;
void move(int n,char a, char b)
{
	cout << "Move disk " << n << " from " << a << " to " << b << endl;
}

void towerOfHanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		cout << "Move disk 1 " << "from " << a << " to " << c << endl;
		return;
	}

	towerOfHanoi(n - 1, a, c, b);
	move(n, a, c);
	towerOfHanoi(n - 1, b, a, c);
}

int main()
{
	int n; cin >> n;
	towerOfHanoi(n, 'A', 'B', 'C');
	return 0;
}