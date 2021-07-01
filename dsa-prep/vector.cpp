#include <bits/stdc++.h>
using namespace std;
void io() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

template<typename T> class vectorClass {
	//empty vector
	int current;
	int capacity;
	T*arr;
public:
	vectorClass() {
		arr = new T[1];
		current = 0;
		capacity = 1;
	}
	void push(T data) {
		//push 2
		// 1
		// 1 2
		if (current == capacity) {
			T*temp = new T[2 * capacity];
			for (int i = 0; i < capacity; i++) {
				temp[i] = arr[i];
			}
			delete [] arr;
			current = capacity;
			capacity *= 2;
			arr = temp;
		}
		// 1 -> curr->1 capcity=1
		arr[current] = data;
		current++;
	}
	void pop() {
		current--;
	}
	int getCapacity() {
		return capacity;
	}
	int getSize() {
		return current;
	}
	void printData() {
		for (int i = 0; i < current; i++) {
			cout << arr[i] << " ";
		}
	}
};


int main()
{
	io();
	vectorClass<int>v1;
	cout << v1.getCapacity() << endl;
	v1.push(2);
	v1.push(23);
	v1.push(45);
	v1.push(267);
	v1.push(234);
	v1.printData();
	cout << v1.getSize() << endl;
	v1.pop();
	v1.printData();
	return 0;
}