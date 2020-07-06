//Pass_by_Reference.cpp
#include <iostream>
using namespace std;

void Swap( int &a, int &b )
{
	int t;
	t = a;
	a = b;
	b = t;
}


int main()
{
	int x = 10;
	int y = 20;
	cout << " X = " << x << ", Y = " <<y;
	Swap( x , y );
	cout << "\n X = " << x << ", Y = " <<y;
}
