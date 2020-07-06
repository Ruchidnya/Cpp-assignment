//Queue_operation.cpp

#include <iostream>
#include <queue>

using namespace std;

int main()
{
	//Queue
	queue<int> q;
	q.push(10);
	q.push(11);
	q.push(12);
	q.push(13);

	cout << " Size of Queue " << q.size() << endl ;
	cout << " First element of Queue " << q.front() << endl ;
	cout << " Last element of Queue " << q.back() << endl ;

	while(!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}


	//Priority Queue
	priority_queue<int> pq;
	pq.push(10);
	pq.push(6);
	pq.push(25);
	pq.push(3);

	cout << "\n Size of Priority Queue " << pq.size() << endl ;

	while(!pq.empty())
	{
		cout << pq.top() << endl;
		pq.pop();
	}



}



