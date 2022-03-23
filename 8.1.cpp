#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* str)
{
	int k = 0;
	for (int i = 0; str[i + 1] != 0; i++)
		if ( str[i] == 'a' && str[i+1] == 'b' && str[i+2] == 'c')
		{
			k++;	
		}
			return k;
}
char* Change(char* str)
{
	for (int i = 0; str[i + 1] != 0; i++)
		if (str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c')
		{
			
			str[i] = ' ';
			str[i+1] = '*';
			str[i+2] = '*';
		}
	return str;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "Number of occurrences " << Count(str) <<  endl;
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string : " << dest << endl;
	return 0;
}