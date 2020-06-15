
#include "MyIterator.h"
#include "MyQueue.h"
using namespace std;
using namespace N;






MyIterator N::MyQueue::begin()
{
	MyIterator t = MyIterator(arr + start);
	return t;
}

MyIterator N::MyQueue::end()
{
	return MyIterator(this + finish);
}

MyQueue::MyQueue() {
		start = 0;
		finish = 0;
	}

	void MyQueue::push(int n) {
		if (finish >= capacity)throw "queue is full";
			arr[finish] = n;
			finish++;

	}

	int MyQueue::pop() {
		if (this->isQueueEmpty())throw "queue is empty";

		int t = arr[start];
		++start;
		return t;
	}

	int MyQueue::front() {
		if (this->isQueueEmpty())throw "queue is empty";

		return arr[start];
	}

	int MyQueue::getLength() {
		return finish - start;
	}

	void MyQueue::clear() {
		finish = 0;
		start = 0;
	}

	bool N::MyQueue::isQueueEmpty()
	{
		if (this->getLength() == 0)return 1;
		return 0;
	}




