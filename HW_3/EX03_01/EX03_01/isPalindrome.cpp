#include"isPalindrome.h"
#include<iostream>
using namespace std;

//returns whether or not a string is a palindrome
bool isPalindrome(const string& s)
{
	bool result = true; //flag for storing result of test for palindrome

	//tests first and last letter, then second and second to last, etc. to confirm if string is palindromic
	for (int n = 0; n < s.size(); n++)
	{
		if (s.at(n) != s.at(s.size() - (n+1))) //sets flag to false if tested characters don't match
		{
			result = false;					
		}
	}

	return result;
}