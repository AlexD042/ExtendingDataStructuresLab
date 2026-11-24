#include <vector>
#include <iostream>

template <typename T>
class Stack {
private:
	std::vector<T> s;
public:
	void push(T item) {
		s.push_back(item);
	}
	T pop() {
		T lastElement = s.back();
		s.pop_back();
		return lastElement;
	}
};

template <typename T>
class Queue {
private:
	std::vector<T> q;
public:
	void push(T item) {
		q.push_back(item);
	}
	T pop() {
		T firstElement = q.at(0);
		q.erase(q.begin());
		return firstElement;
	}
};

template <typename T>
class Deque {
private:
	std::vector<T> d;
public:
	void pushBack(T item) {
		d.push_back(item);
	}
	T popBack() {
		T lastElement = d.back();
		d.pop_back();
		return lastElement;
	}
	void pushFront(T item) {
		d.insert(d.begin(), item);
	}
	T popFront() {
		T firstElement = d.at(0);
		d.erase(d.begin());
		return firstElement;
	}
};

int main() {

	// LIFO
	Stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	std::cout << "Elements: ";
	std::cout << s.pop() << ", ";
	std::cout << s.pop() << ", ";
	std::cout << s.pop() << ", ";
	std::cout << s.pop() << ", ";
	std::cout << s.pop();

	// FIFO
	Queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	std::cout << "\n\nElements: ";
	std::cout << q.pop() << ", ";
	std::cout << q.pop() << ", ";
	std::cout << q.pop() << ", ";
	std::cout << q.pop() << ", ";
	std::cout << q.pop();

	Deque<int> d;
	d.pushFront(1);
	d.pushFront(2);
	d.pushBack(3);
	d.pushBack(4);
	d.pushBack(5);
	std::cout << "\n\nElements: ";
	std::cout << d.popFront() << ", ";
	std::cout << d.popBack() << ", ";
	std::cout << d.popFront() << ", ";
	std::cout << d.popFront() << ", ";
	std::cout << d.popBack();

	return 0;
}