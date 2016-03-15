//
// Program Name: EX03_1
// Name: Jacob Martin
// Date: 3.15.2016
// Class and Section: Computer Science I SEC 1
//

#include"isPalindrome.h"
#include<iostream>
#include<string>
using namespace std;

//This program tests an input string to see if it's a palindrome.

int main()
{
	string word; //stores word as string
	cout << "Enter a word to be tested: "; //prompts user for input of word to be stored
	cin >> word; //stores input word

	//tests string, displays result
	if (isPalindrome(word))
		cout << "\nThat's a palindrome.\n";
	else if (!isPalindrome(word))
		cout << "\nThat is NOT a palindrome.\n";
	return 0;
}
