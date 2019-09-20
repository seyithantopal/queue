#include "Queue.cpp"

int main() {
	Queue<int> queue;

	// Inserting elements into the queue
	cout << "Inserting elements into the queue" << endl;
	queue.push(5);
	queue.push(7);
	queue.push(4);
	queue.push(9);
	queue.push(10);

	cout << "Printing elements of the queue" << endl;
	queue.print();

	cout << "Popping an element from the queue" << endl;
	queue.pop();

	cout << "Printing elements of the queue" << endl;
	queue.print();

	cout << "Getting front and back elements of the queue" << endl;
	cout << queue.front() << endl;
	cout << "Getting back elements of the queue" << endl;
	cout << queue.back() << endl;

	cout << "Printing elements of the queue" << endl;
	queue.print();
}