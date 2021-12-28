#include <iostream>
#include <cstdlib>

using namespace std;

const int ARRAY_SIZE = 9;

int main()
{
	void show(double *);
	double rates[ARRAY_SIZE] = {6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};
	
	show (rates);
	
	system ("pause");
	return 0;
}
void show(double *rates)
{
	for(int i=0; i < ARRAY_SIZE; i++)
	cout << *(rates + i) <<endl;
	
}
