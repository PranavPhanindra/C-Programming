#include <iostream>

using namespace std;

int main()
{
	char ch;

	while (cin.get(ch))
	{
		if (isalpha(ch))
			cout.put(toupper(ch));
	}
	return 0;
}
