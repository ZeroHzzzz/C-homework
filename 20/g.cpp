#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[4][20], s[20];
	int i, j, len, k, count[4] = {0}; // (1)

	for (i = 0; i < 4; i++)
		cin.getline(str[i], 20); // (2)

	cin >> s;
	len = strlen(s);

	for (i = 0; i < 4; i++)
	{
		k = 0;
		for (j = 0; str[i][j] != '\0';)
		{
			if (str[i][j] == s[k]) // (3)
			{
				j++; k++;
			}
			else
			{
				j -= k - 1; // (4)
				k = 0;
			}
			if (k == len)
			{
				count[i]++;
				k = 0; // (5)
			}
		}
	}

	for (i = 0; i < 4; i++)
		cout << count[i] << " ";
	return 0;
}
