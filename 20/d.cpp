#include<iostream>
#include<string.h>
char change[26], str[5000];
using namespace std;

void CheckChangeRule()
{
	int i;
	for (i = 0; i < 26; i++)
	{
		if (change[i] >= 'A' && change[i] <= 'Z')
			change[i] -= 'A' - 'a';
	}
}

void ChangeString()
{
	int i;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = change[str[i] - 'A'] - 'a' + 'A';
		else
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = change[str[i] - 'a'];
	}
}

int main()
{
	int i;
	cin >> str;
	cin >> change;
	CheckChangeRule();
	ChangeString();
	cout << str << endl;
	return 0;
}
