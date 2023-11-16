/*Counting occurrences: Re-write the program given in slide 13 (Topic C-Strings) 
using a function: Write a function called Count which takes as parameters a string 
and one character and returns the number of times the character occurs in the string. 
Write a program to test your function with user-defined data.
For example: Assuming the string passed is “Hello” and the letter is “l”, your 
function should return 2.*/
#include <iostream> 
#include<cstring>
using namespace std;
int Count(char[], char);
int main()
{
	char word[30];
	char letter;
	cout << "Type in a word: ";
	cin >> word;
	cout << "Type in the letter you want to search for: ";
	cin >> letter;
		cout << "The letter" << letter<< " appears " << Count(word, letter) << " times" << endl;
	return 0;
}

int Count(char str[], char alpha)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == alpha)
			count++;
	}
	return count;
}
