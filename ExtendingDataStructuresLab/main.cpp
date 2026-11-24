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
	void push_back(T item) {
		d.push_back(item);
	}
	T pop_back() {
		T lastElement = d.back();
		d.pop_back();
		return lastElement;
	}
	void push_front(T item) {
		d.insert(d.begin(), item);
	}
	T pop_front() {
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
	std::cout << s.pop() << '\n';

	// FIFO
	Queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	std::cout << "\nElements: ";
	std::cout << q.pop() << ", ";
	std::cout << q.pop() << ", ";
	std::cout << q.pop() << ", ";
	std::cout << q.pop() << ", ";
	std::cout << q.pop() << '\n';

	Deque<int> d;
	d.push_front(1);
	d.push_front(2);
	d.push_back(3);
	d.push_back(4);
	d.push_back(5);
	std::cout << "\nElements: ";
	std::cout << d.pop_front() << ", ";
	std::cout << d.pop_back() << ", ";
	std::cout << d.pop_front() << ", ";
	std::cout << d.pop_front() << ", ";
	std::cout << d.pop_back() << '\n';

	return 0;
}