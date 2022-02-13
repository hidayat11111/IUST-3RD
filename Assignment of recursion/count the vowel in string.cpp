#include<iostream>
using namespace std;

// Function to check the Vowel
bool isVowel(char ch)
{
	ch = toupper(ch);
	return (ch=='A' || ch=='E' || ch=='I' ||ch=='O' || ch=='U');
}
int countVowels(string str)
{
	int count = 0;
	for (int i=0; i<str.length(); i++)
		if (isVowel(str[i])) // Check for vowel
			++count;
	return count;
}
int main()
{
	//string object
	string str = "My name is Hidayat Ali ";

	// Total numbers of Vowel
	cout <<"The total number of vowels in your String are ="<< countVowels(str) << endl;
	return 0;
}
