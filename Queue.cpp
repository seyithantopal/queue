#ifndef QUEUE_CPP
#define QUEUE_CPP

#include "Queue.h"

template<typename T>
void Queue<T>::push(const T& data) {
	list.insert(data, true);
}

template<typename T>
void Queue<T>::pop() {
	list.erase(1);
}

template<typename T>
T& Queue<T>::front() const {
	return list.get(1);
}

template<typename T>
T& Queue<T>::back() const {
	return list.get(list.size());
}

template<typename T>
int Queue<T>::size() const {
	return list.size();
}

template<typename T>
void Queue<T>::print() const {
	list.print();
}


#endif