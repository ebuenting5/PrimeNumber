#include <iostream>
#include <cmath>
using namespace std;
//Prime numbers should be found by checking if that number is a multiple of any of the prime numbers before it
int main() {
	for (int i = 1; i <= 1000; ++i)
	{
		int ctr = 0;
			for (int j = 2; j = sqrt(i); ++j)
			{
				if (i % j == 0)
					ctr = 1;
			}
			if (ctr == 0)
				cout << i << " ";
	}
	return 0;
}