#include <iostream>
#include <string>
using namespace std;

void vowelCheck(string s, int index, int size) {
	static int counter = 0;
	if (index == size) {
		cout << counter;
		return;
	}
	switch (s[index])
	{
	case 'a':
		counter++;
		break;
	case 'e':
		counter++;
		break;
	case 'i':
		counter++;
		break;
	case 'o':
		counter++;
		break;
	case 'u':
		counter++;
		break;
	case 'A':
		counter++;
		break;
	case 'I':
		counter++;
		break;
	case 'E':
		counter++;
		break;
	case 'O':
		counter++;
		break;
	case 'U':
		counter++;
		break;
	default:
		break;
	}
	vowelCheck(s, index + 1, size);
}

int main() {
	string str;
	getline(cin, str);
	vowelCheck(str, 0, str.size());
}