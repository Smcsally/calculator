#include<iostream>
#include"stack.h"

using namespace std;

int main() {
	// make the stack
	Stack stack;
	char user_input[100];


	cout << "Enter a string to evaluate (empty string to stop): ";
	cin.getline(user_input, 100); 

	while (strcmp(user_input, "")) {
		for (int i = 0; i < strlen(user_input); i++) {
			if (isdigit(user_input[i])) {
				stack.push((double)user_input[i]);
			}
		}
		cout << "Enter a string to evaluate (empty string to stop): ";
		cin.getline(user_input,100);
	}

	return 0;
}