#include <iostream>
#include <set>

using namespace std;

void Show( multiset<int, greater <int> > ms )
{
	for(auto i=ms.begin() ; i!= ms.end() ; i++ )
	{
		cout << *i << endl;
	}
}


int main()
{
	multiset<int, greater <int> > ms;
	ms.insert(30);
	ms.insert(20);
	ms.insert(30);
	ms.insert(20);
	ms.insert(10);
	ms.insert(40);
	
	cout << "The multiset is : " << endl;
	Show(ms);

	ms.erase( ms.begin() , ms.find(20) ); 
	cout << "The multiset after erase till 20 : " << endl;
	Show(ms);

}






