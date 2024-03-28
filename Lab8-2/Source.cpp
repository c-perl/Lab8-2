#include <iostream>
#include <string>
using namespace std;

int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char ch : str) {
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r') {
            if (inWord) {
                count++;
                inWord = false;
            }
        }
        else {
            if (!inWord) {
                inWord = true;
            }
        }
    }
    
    if (inWord) {
        count++;
    }
    return count;
}

int main(void) {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;

		int stringLength = countWords(input);
		cout <<"Word count: "<< stringLength << endl;

	}
	return 0;
}