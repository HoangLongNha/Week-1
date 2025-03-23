#include <iostream>
#include <cstring>
using namespace std;
void generateBinaryStrings(int n, string str)
{
	if (str.length() == n)
	{
		cout << str << endl;
		return;
	}
	generateBinaryStrings(n, str + "0");
	generateBinaryStrings(n, str + "1");s  
}
int main()
{
	int n; cin >> n;
	generateBinaryStrings(n, "");
	return 0;
}