#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];

public:
	Queues() {
		FRONT = -1;
		REAR = -1;
	}

	void insert() {
		int nua;
		cout << "enter a number: ";
		cin >> nua;
		cout << endl;
	}

	if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
		cout << "\nQueue overflow\n";
		return;
	}

	if (FRONT == -1) {
		FRONT = 0;
		REAR = 0;
	}
};