#include<iostream>
#include<cmath>
using namespace std;

int main()
{	
	int n;
	cin >> n;
	//int size = sqrt(double(n));
	int size = n;
	int* primes = new int[size];
	int num = 0;
	for(int i = 2 ; i <= n ; i++)
	{
		bool prime = true;
		for(int j = 0; j < num ; j++)
		{
			if(primes[j] == 0)
				break;
			if( i%primes[j] == 0)
			{	
				prime = false;
				break;
			}
		}
		if(prime == true)
		{
			primes[num] = i;
			num++;
			//cout << i << " ";
		}
	}
	//cout << endl;
}
