#include <iostream>
using namespace std;

int main() {
	const int size { 21 }; // Size of the pattern, looks better when odd
	const char star { '*' }, space { ' ' }; // Symbols with which to fill
	enum commands {
		EXIT, A, B, C, D, E, F, G, H, I, J
	};
	int command { 0 };
	do {
		cout
				<< "Enter the number of a pattern you want to draw (1 to 10, 0 to exit): ";
		cin >> command;

		switch (command) {
		case A:
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (i <= j) {
						cout << star;
					} else {
						cout << space;
					}
				}
				cout << endl;
			}
			break;
		case B:
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (i >= j) {
						cout << star;
					} else {
						cout << space;
					}
				}
				cout << endl;
			}
			break;
		case C:
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (i <= j && i + j <= size - 1) {
						cout << star;
					} else {
						cout << space;
					}
				}
				cout << endl;
			}
			break;
		case D:
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (i >= j && i + j >= size - 1) {
						cout << star;
					} else {
						cout << space;
					}
				}
				cout << endl;
			}
			break;
		case E:
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if ((i >= j && i + j >= size - 1)
							|| (i <= j && i + j <= size - 1)) {
						cout << star;
					} else {
						cout << space;
					}
				}
				cout << endl;
			}
			break;
		case F:
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if ((i >= j && i + j <= size - 1)
							|| (i <= j && i + j >= size - 1)) {
						cout << star;
					} else {
						cout << space;
					}
				}
				cout << endl;
			}
			break;
		case G:
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (i >= j && i + j <= size - 1) {
						cout << star;
					} else {
						cout << space;
					}
				}
				cout << endl;
			}
			break;
		case H:
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (i <= j && i + j >= size - 1) {
						cout << star;
					} else {
						cout << space;
					}
				}
				cout << endl;
			}
			break;
		case I:
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (i + j <= size - 1) {
						cout << star;
					} else {
						cout << space;
					}
				}
				cout << endl;
			}
			break;
		case J:
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (i + j >= size - 1) {
						cout << star;
					} else {
						cout << space;
					}
				}
				cout << endl;
			}
			break;
		case EXIT:
			return 0;
			break;
		default:
			cout << "Wrong command!" << endl;
		}
		cout << endl;
	} while (command);

	return 0;
}
