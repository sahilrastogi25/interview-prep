template<typename T>class myStack {
public:
	int top = -1;
	int size = 5;
	T*arr = new T[size];

	void push(T data) {
		if (isFull()) {
			cout << "Stack is full!";
		} else {
			top = top + 1;
			arr[top] = data;
		}
	}
	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty!";
		} else {
			top--;
		}
	}
	bool isFull() {
		if (top == size - 1) {
			return true;
		}
		return false;
	}
	T Top() {
		return arr[top];
	}
	bool isEmpty() {
		if (top == -1) {
			return true;
		}
		return false;
	}
	int getSize() {
		return size;
	}
	void print() {
		for (int i = 0; i <= top; i++) {
			cout << arr[i] << " ";
		}
	}
};