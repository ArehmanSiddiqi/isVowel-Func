#include <iostream> 
using namespace std;

bool is_vowel(char);

int main()
{
	char ch;
	bool r;

	cout << "  Enter any character :: ";
	cin >> ch;
	ch = tolower(ch);

	r = is_vowel(ch);

	if (r)
		cout << "  Character = Vowel " << endl;
	else
		cout << "  Character = Consonent " << endl;

		
    system("pause");
	return 0;
}

bool is_vowel(char a)
{
	bool b;
	switch (a)
	{ 
	case 'a': 	b = true;  break;
	case 'e':   b = true;  break;
	case 'i':   b = true;  break;
	case 'o':   b = true;  break;
	case 'u':   b = true;  break;
	default:
		b = false;
	}

	return b;
}