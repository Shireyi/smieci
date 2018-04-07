#include <iostream>
#include <windows.h>
using namespace std;

char choinka[5][5] = {
	{' ',' ','$',' ',' '},
	{' ','$','$','$',' ' },
	{'$','$','$','$','$' },
	{' ','$','$','$',' ' },
	{' ',' ','$',' ',' ' }
};

void furrytoabominacja() {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << choinka[i][j];
		}
		cout << "\n";
	}
}

void animeisnowillegal() {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (choinka[i][j] == '$')
				choinka[i][j] = ' ';
			else
				choinka[i][j] = '$';
		}
	}
}

int main()
{
	while (true) {
        system ("pause");
		furrytoabominacja();
		animeisnowillegal();
}
}
