//mobile keypad program
#include <bits/stdc++.h>
using namespace std;

void printSequence(string str)
{
	char nums[][10]
		= { "", "", "2ABC", "3DEF", "4GHI",
			"5JKL", "6MNO", "7PQRS", "8TUV",
			"9WXYZ" };
	int i = 0;
	while (str[i] != '\0') {

		if (str[i] == ' ') {
			i++;
			continue;
		}
		int count = 0;
		while (str[i + 1]
			&& str[i] == str[i + 1]) {
			if (count == 3 && ((str[i] >= '2'&& str[i] <= '6') || (str[i] == '8')))
				break;
			else if (count == 4 && (str[i] == '7'|| str[i] == '9'))
				break;
			count++;
			i++;
			if (str[i] == '\0')
				break;
		}
		if (str[i] == '7' || str[i] == '9') {
			cout << nums[str[i]-48][count % 5];
		}
		else {
			cout << nums[str[i]-48][count % 4];
		}
		i++;
	}
}

int main()
{
	string string_choice;
	cout<<"Enter number choices: ";
	getline(cin,string_choice);
	cout<<"The output in nokia style keypad is: ";
	printSequence(string_choice);
	return 0;
}
