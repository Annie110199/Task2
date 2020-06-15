#include"MyQueue.h"

#include<iostream>

using namespace std;
using namespace N;
int main() {
	MyQueue *q = new MyQueue();
	MyQueue &qu = *q;
	qu.push(1);
	qu.push(2);
	qu.push(-3);
	cout << qu.pop();
	cout << " " << qu.front() << " ";
	cout <<qu.pop()<<endl;
	cout << qu.isQueueEmpty() << endl;
	qu.clear();
	cout << qu.isQueueEmpty() << endl;
	return 0;
}

