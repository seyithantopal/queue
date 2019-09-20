#ifndef QUEUE_H
#define QUEUE_H

#include "List.cpp"

template<typename T>
class Queue {
private:
	List<T> list;
public:
	void push(const T& data);
	void pop();
	T& front() const;
	T& back() const;
	int size() const;
	void print() const;
};

#endif