#include<iostream>
using namespace std;

void stair(int num)
{
	int* steps = new int[num];
	for(int i = 0; i < num ; i++)
	{
		switch(i+1)
		{
			case 1:
				steps[i] = 1;
				break;
			case 2:
				steps[i] = 2;
				break;
			case 3:
				steps[i] = 4;
				break;
			default:
				steps[i] = steps[i-3]+steps[i-2]+steps[i-1];
		}
	}
	cout << steps[num-1] << endl;
}

int main()
{
	int n;
	do
	{
		cin >> n;
	}while(n <= 0);
	stair(n);
}
