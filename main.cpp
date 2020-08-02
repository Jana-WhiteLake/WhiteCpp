#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int k = 0;
	cin >> str;
	for (int i = 0; i < str.size(); i++){
		if (str[i] == 'f'){
			k++;
			if (k == 2) {
				cout << i;
			}
		}
	}
	if (k == 1) {
		cout << "-1";
	}
	else if (k == 0) {
		cout << "-2";
	}
	return 0;
}