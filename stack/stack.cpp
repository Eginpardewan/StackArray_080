#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	int Stack_Array[5];
	int top;

public:
	//construktor
	StackArray() {
		top = -1;
	}
	int push(int element) {
		if (top == 0) { // step 1
			cout << "Number of data exceed the list" << endl;
			return 0;


		}
		top++; // step 2
		Stack_Array[top] = element; // step 3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) { // step 1
			cout << "\nStack is empty. Cannot pop." << endl;   //1.a
			return; //1.b
		}
		
		cout << "/nThe popped element is : " << Stack_Array[top] << endl; //step 2
		top--; // step 3 decrement
	}

	//method for check if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			int top = this->top; // Inisialisasi variabel lokal 'top' dengan nilai dari variabel anggota 'top'
			for (; top >= 0; top--) {
				cout << Stack_Array[top] << endl;
			}
		}
	}

int main() {
	StackArray s;
	char ch;
	while (true) {
		cout << endl;
		cout << "\n***Stack Menu***\n" << endl;
		cout << "1. Push \n" << endl;
		cout << "2. Pop \n" << endl;
		cout << "3. Display \n" << endl;
		cout << "4. exit \n" << endl;
		cout << "Enter your choice :";
		cin >> ch;
		switch (ch) {
		case '1': {
			int element;
			cout << "Enter an Element : ";
			cin >> element;
			s.push(element);
		}
		case '2':
			if (s.empty()) {
				cout << "\nStack is empty." << endl;
				break;
			}
			s.pop();
			break;
		case '3':
			s.display();
			break;

		case '4':
			return 0;
		default:
			cout << "nInvalid choice." << endl;
			break;
		}
	}
}