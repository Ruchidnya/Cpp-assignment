//Vector_operations.cpp

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	for(int i=1;i<6;i++)
	{
		v.push_back(i*10);
	}

	for(auto i : v)
	{
		cout << i << endl;
	}

	cout << "\n Vector size is : " << v.size() << endl;

	vector <int> v2;	
	v2.insert(v2.begin(), v.begin(), v.end());
	
	for(auto i : v2)
	{
		cout << i << endl;
	}
}
