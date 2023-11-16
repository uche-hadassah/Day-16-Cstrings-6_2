/*Counting occurrences: Re-write the program given in slide 13 (Topic C-Strings) 
using a function: Write a function called Count which takes as parameters a string 
and one character and returns the number of times the character occurs in the string. 
Write a program to test your function with user-defined data.
For example: Assuming the string passed is “Hello” and the letter is “l”, your 
function should return 2.*/
#include <iostream> 
//Counts the number of times the letter h appears in string
using namespace std;
int main()
{
	int i, count = 0;
	char word[15];
	cout << "Type in a word: ";
	cin >> word;
	for (i = 0; word[i] != '\0'; i++)
		if (word[i] == 'h')
			count++;
	if (count == 1)
		cout << "The letter h appears 1 time" << endl;
	else
		cout << "The letter h appears " << count << "times" << endl;
	return 0;
}
