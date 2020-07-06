#include <iostream>
#include <set>

using namespace std;

int main()
{
	set <int, greater <int> > s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.insert(40);
	s.insert(40);
	s.insert(50);
	
	cout << "Set is : " << endl;
	for(auto it=s.begin() ; it!=s.end() ; it++)
	{
		cout << *it << endl;
	}

	//Erase till 30
	s.erase( s.begin(), s.find(30));
	cout << " After erasing : "<< endl;
	for(auto it=s.begin() ; it!=s.end() ; it++)
        {
                cout << *it << endl;
        }
}




