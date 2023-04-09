#include <iostream>

using namespace std;

char* weird_string() {
   char c[] = ¡°123345¡±;
   return c;
}

int main()
{
	char* res = weird_string();
	for (int i=0; i<res.size(); i++)
	{
		cout << res[i];
	}
}
