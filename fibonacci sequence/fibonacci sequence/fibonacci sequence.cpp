#include <iostream>
using namespace std;

int fibonacci(int n);

int main()
{
	cout << "Which fibonacci term would you like to find?" << endl;
	int n;
	cin >> n;
	cout << fibonacci(n) << endl;
	return 0;
}

int fibonacci(int n)
{
	//Base Case
	if (n < 2)
		return n;

	return fibonacci(n - 1) + fibonacci(n - 2);
}