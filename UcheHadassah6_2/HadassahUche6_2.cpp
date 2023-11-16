/*Name:Uche Hadassah
This program counts the number of times a letter appears in an string*/
#include <iostream> 
#include<cstring>
using namespace std;
const int MAX = 100;
int Count(char[], char);//Function Prototype
int main()
{
	char word[MAX];
	char letter;
	cout << "Type in a word: ";
	cin >> word;
	cout << "Type in the letter you want to search for: ";
	cin >> letter;
	if (Count(word, letter) == 1)//When the letter appears once
	{
		cout << "The letter " << letter << " appears once" << endl;
	}
	else
	{
		cout << "The letter " << letter << " appears " << Count(word, letter) << " times" << endl;
	}
	return 0;
}

int Count(char str[], char alpha)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)//as long as we are not at the end of the string
	{
		if (str[i] == alpha)
			count++;//increment the counter
	}
	return count;//returns count
}
