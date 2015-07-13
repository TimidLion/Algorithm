#include<iostream>
using namespace std;
int fibonacci(int n)
{
	if(n == 1)
		return 1;
	else if(n == 2)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
	int x;
	while(1)
	{
		cout << "press n , or -1 to quit" << endl;
		cin >> x;
		if(x == -1)
			break;
		cout << fibonacci(x) << endl;
	}
	return 0;
}
